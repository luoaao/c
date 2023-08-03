#!/bin/bash

read -p ">: " score
if test $score -lt 0 -o $score -gt 100
then
	echo "[0, 100]"
	exit 1
fi

score=$((score / 10))

case $score in
	10)
		echo ">: A"
		;;
	9)
		echo ">: A"
		;;
	8)
		echo ">: B"
		;;
	7)
		echo ">: B"
		;;
	6)
		echo ">: C"
		;;
	*)
		echo "D"
		;;
esac

