#!/bin/bash
var1=2
var2=3
((var3=var1+var2))
var3=$((var2%var1))

echo "var3 = $var3"

echo "$((~var1))"

echo $((var1**var2)) #幂运算

ret=$((var1 < var2)) #将运算结果赋值给一个变量
echo $? #表示上一条指令的执行情况，执行成功返回0
echo "ret = $ret"

ret=$(((1+2)*3))
echo "ret = $ret"

ret=$((5 > 1 && (var=30))) #支持短路法则
echo "ret = $ret"
echo "var = $var"

ret=$((var=300, var < 10, var > 30))
echo "ret = $ret"

