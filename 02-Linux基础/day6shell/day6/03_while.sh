#!/bin/bash

i=0
while test $i -le 100
do
	((sum+=$i))
	((i++))
done

echo "sum = $sum"
