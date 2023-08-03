#! /bin/bash

arr=([0]=10 [2]=20 [3]=30 [5]=50 [10]=100)

echo "arr[5]: ${arr[5]}"
echo "arr[6]: ${arr[6]}"

echo "len = ${#arr[*]}"
