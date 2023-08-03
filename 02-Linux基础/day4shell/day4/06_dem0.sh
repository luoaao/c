#! /bin/bash
echo $0
echo $1
echo $2
echo $3
echo $@
echo $*
echo $$

echo "--------------"
#ret=`grep "hello" test.txt -ni`
ret=`grep $1 $2 -ni`

echo $ret

set $ret

echo $1
echo $2
echo $3
echo $4
