#!/bin/bash

read -p "请输入一个成绩>:  " score

if test $score -gt 100 -o $score -lt 0
then
	echo "请输入 [0, 100] 成绩"
	#exit 1
	bash $0
	exit 1
fi

if [ $score -ge 90 -a $score -le 100 ]
then
	echo ">: A"
elif [ $score -ge 70 -a $score -lt 90 ]
then
	echo ">: B"
elif [ $score -ge 60 -a $score -lt 70 ]
then
	echo ">: C"
else
	echo ">: D"
fi
