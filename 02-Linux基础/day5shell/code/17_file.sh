#!/bin/bash

read -p "请输入两个文件>:  " file1 file2

if test $file1 -ot $file2
then
	echo "$file1 更旧"
else
	echo "$file1 更新"
fi

