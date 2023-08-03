#!/bin/bash

var=10

if [ $var -gt 0 -a $var -lt 20 ]
then
	echo "var > 0"
fi


read -p ">:   " var


if [ $var -lt 10 ]
then
	echo "var < 10"
elif test $var -eq 10
then
	echo "var == 10"
else
	echo "var > 10"
fi
