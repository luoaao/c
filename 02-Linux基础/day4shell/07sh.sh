#! /bin/bash 

str="www.baidu.comwww.baidu.com"
echo ${str:5:3}
echo ${str:start}
echo ${str:0-start}
echo ${str:0-5:4}

echo ${str#*bai}
echo ${str##*bai}
echo ${str%bai*}
echo ${str%%sub*}
