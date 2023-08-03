#!/bin/bash

read -p "请输入一个软件名 " app

read -p "请输入指令是否下载 " cmd

case $cmd in
	"yes"| "Yes" | "YSE" | "y"| "Y")
		sudo apt-get install $app
		;;
	"NO"|"No"|"no"|"N"|"n")
		echo "取消下载"
		;;
esac
