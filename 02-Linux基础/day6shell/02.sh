#! /bin/bash 

arr=(3 4 5 2 8)
echo "${arr[@]}"
len=${#arr[@]}

for ((i=0; i<len-1; i++))
do
	for ((j=0; j<5-i-1; j++))
	do
		if [ ${arr[j]} -gt ${arr[j+1]} ]
		then
			temp=${arr[j]}
			arr[j]=${arr[j+1]}
			arr[j+1]=$temp
		fi
	done
done

echo "${arr[@]}"
