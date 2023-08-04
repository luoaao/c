#!/bin/bash

i=0
while [ $i -le 5 ]
do
	((i++))
	if [ $i -eq 3 ]
	then
		#break
		continue
	fi
 	echo "i = $i"

done
