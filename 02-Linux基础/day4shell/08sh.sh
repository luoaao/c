#! /bin/bash 
arr=(1 2 3 4 54 5 6 7 8 9 7 dfas "dfasf sdf")

echo ${arr[*]}

arr[0]=999
echo ${arr[*]}

echo ${#arr[*]}
echo ${#arr[12]}


