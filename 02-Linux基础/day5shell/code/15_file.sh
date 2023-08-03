#!/bin/bash

read -p "please enter a filename >: " file

if [ -e $file ]
then
	#echo "文件存在"
	if [ -f $file ]
	then
		echo "-"
	elif [ -d $file ]
	then
		echo "d"
	elif [ -L $file ]
	then
		echo "l"
	elif [ -b $file ]
	then
		echo "b"
	elif [ -c $file ]
	then
		echo "c"
	elif [ -p $file ]
	then
		echo "p"
	else
		echo "s"
	fi
	
else
	echo "文件不存在"
fi
