#！ /bin/bash 

i=0
while [ $i -le 5 ]
do 
	((i=i+1))
	if [ $i -eq 3 ]
	then 
		continue
	fi
	echo "i=$i"
done

