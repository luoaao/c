#!/bin/bash

#arr=(1 2 3 4 5 "hello" "hello world")

arr=([0]=1 [3]=2 [4]=3 [8]="hello" [20]="hello world")

echo "len: ${#arr[*]}"
echo "${arr[*]}"

arr=(${arr[*]} "AAA")

echo "len: ${#arr[*]}"
echo "${arr[*]}"
echo "${arr[6]}"

unset arr[6]
echo "${arr[6]}"

unset arr
echo "${arr[*]}"

