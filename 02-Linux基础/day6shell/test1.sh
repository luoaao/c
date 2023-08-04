#!/bin/bash 

echo "input 1>:"
read dir1

if [ -d $dir1 ]
then
	echo " yes/no dele $dir1>: "
	read ys
	case $ys in 
		"yes")
			rm $dir1 -r 
			mkdir $dir1 
			echo "dele $dir1 and mk $dir1"
			;;
		"no")
			echo "no dele $dir1"
	esac
else
	mkdir $dir1
fi

echo "input 2>:"
read dir2

if [ -d $dir2 ]
then
	echo " yes/no dele $dir2"
	read ys
	case $ys in 
		"yes")
			rm $dir1 -r 
			mkdir $dir1 
			echo "dele $dir1 and mk $dir1"
			;;
		"no")
			echo "no dele $dir1"
	esac

else
	mkdir $dir2
fi
read -p " input dir3>: " dir3
i=0
j=0
for di in `ls $dir3`
do
	if [ -f $dir3/$di ]
	then
		cp $dir3/$di $dir1
		((i++))
	elif [ -d $dir3/$di ]
	then
		cp $dir3/$di $dir2 -r
		((j++))
	fi
	done
echo $i
echo $j

