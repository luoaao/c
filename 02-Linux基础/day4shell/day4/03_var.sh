#!/bin/bash

var=123
echo $var
var=hello
echo $var
var1='hello world'
echo $var1
var2="hello world"
echo $var2

var="$var world"
echo $var
unset var
echo "var: $var"
