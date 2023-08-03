#!/bin/bash

str1=hello
str2=world

:<<"EOF"
str1=$str2
echo "str1: $str1"
EOF

str1="$str1$str2"
echo "str1: $str1"

echo ${#str1}
