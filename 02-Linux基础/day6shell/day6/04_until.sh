#!/bin/bash

i=0
until test $i -gt 100
do
	((sum+=$i))
	((i++))
done

echo "sum = $sum"
