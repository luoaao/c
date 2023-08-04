#!/bin/bash

read -p "请输入 mydir myfile 两个目录>: " mydir myfile

if test -e $mydir -a -e $myfile
then
	read -p "请输入【y | N 】 是否要删除这两个目录? " cmd
	case $cmd in
		"yes" | "Yes" | "Y" | "y" | "YES")
			sudo rm -r $mydir $myfile
			mkdir $mydir $myfile
			echo "$mydir $myfie 已经删除并重新创建"
			;;
		"NO" | "No" | "no" |"N" | "n")
			exit 0
			;;
	esac
else
	echo "$mydir 和 $myfile 不存在"
	mkdir $mydir $myfile
	exit 0
fi

read -p "请输入一个已经存在的目录" new_dir

for var in `ls $new_dir`
do
	if test -f $new_dir/$var
	then
		cp $new_dir/$var $myfile
		((file_count++))
	elif test -d $new_dir/$var
	then
		cp -a $new_dir/$var $mydir
		((dir_count++))
	fi
done

echo -e "file: $file_count \n dir: $dir_count"

