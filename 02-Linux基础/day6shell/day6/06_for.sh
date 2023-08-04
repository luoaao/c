#!/bin/bash

:<<!
for var in apple huawei sanxing oppo vivo xiaomi meizu
do
	((i++))
	echo "i = $i ---> var: $var"
done
!

:<<!
for var in {1..100}
do
	((sum += $var))
done
echo "sum = $sum"
!

for var in `ls $1`
do
	((i++))
	echo "$var"
done

echo "i = $i"



