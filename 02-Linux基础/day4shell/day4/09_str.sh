#!/bin/bash
str="www.baidu.comwww.baidu.com"

echo ${str:4:3}
echo ${str:4}
echo ${str:0-5:4}
echo ${str:0-5}

echo ${str#*bai}
echo ${str##*bai}
echo ${str%bai*}
echo ${str%%bai*}
