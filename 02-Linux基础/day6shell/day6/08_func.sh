#!/bin/bash

:<<!
function add(){
	ret=$((10+20))
}

add

echo "ret: $ret"
!

:<<"!"
function add(){
	ret=$(($1+$2))
}

#add 20 20
add $1 $2 # 执行脚本： bash 08_func.sh 10 20

echo "ret: $ret"
!


function add(){
	local ret=$(($1+$2))

	return $ret
}
add $1 $2
echo ret: $?
