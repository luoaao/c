#!/bin/bash

read -p ">:" file

if test -e $file
then
	if test -w $file
	then
		echo "hello world" > $file
	else
		chmod 0777 $file
		echo "已赋权限并写入"
		echo "hello world" > $file
	fi

else
	echo "文件不存在"
	touch $file
	echo "已经新创建"
fi
