#! /bin/bash
var1=$HOME
var2=$PATH

echo "var1: $var1"
echo "var2: $var2"
echo "----------------------------------------"

temp=$var1
var1=$var2
var2=$temp
echo "var1: $var1"
echo "var2: $var2"
