#!/bin/bash

str="hello"
unset str

if test -z "$str"
then
	echo "str is empty"
else
	echo "str is not empty"
fi

:<<!
if test -n "$str"
then
	echo "str is not empty"
else
	echo "str is empty"
fi
!
