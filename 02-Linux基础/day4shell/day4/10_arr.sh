#! /bin/bash

arr=(1 2 3 4 5 hello "hello world")
echo ${arr[0]}
echo ${arr[1]}
echo ${arr[2]}
echo ${arr[3]}
echo ${arr[4]}
echo ${arr[5]}
echo ${arr[6]}

arr[3]=40

echo ${arr[@]}
echo ${arr[*]}

echo " arr[6]: len = ${#arr[6]}"

echo "len: ${#arr[@]}"
echo "len: ${#arr[*]}"
