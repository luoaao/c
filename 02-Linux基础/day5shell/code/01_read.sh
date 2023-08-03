#!/bin/bash

:<<!
echo ">:"

read var1
!

:<<!
read var1 var2

echo "var1: $var1"
echo "var2: $var2"
!

read -p "请输入两个变量>: " var1 var2

echo "var1: $var1, var2: $var2"
