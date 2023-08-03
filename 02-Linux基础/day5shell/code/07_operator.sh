#!/bin/bash

var1=2
var2=3

ret=$[var=$var1 + $var2]

echo "ret= $ret"

ret=$[(2+3)*5]
echo "ret = $ret"

ret=$[m=2**3]
echo "m = $m"

ret=$[3 < 5]
echo "ret = $ret"

ret=$[3 > 5 && 5 > 3]
echo "ret = $ret"
var=10
ret=$[var > 0, var < 0, var=100]

echo "ret = $ret"
