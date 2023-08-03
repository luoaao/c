#!/bin/bash

read -p "请输入两个串" str1 str2

#unset str1

if [ -n "$str1" -a -n "$str2" ]
then
	#比较大小
	if [ "$str1" \> "$str2" ]
	then
		echo "str1 > str2"
	elif [ "$str1" = "$str2" ]
	then
		echo "str1 == str2"
	else
		echo "str1 < str2"
	fi
else
	echo "str1 || str2 is Empty"
	bash $0
fi
