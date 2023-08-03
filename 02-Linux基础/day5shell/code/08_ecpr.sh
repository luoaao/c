#!/bin/bash

var1=2
var2=3

var=`expr $var1 + $var2`
echo var: $var

expr $var1 - $var2
expr $var2 % $var1
expr $var2 / $var1
expr $var2 \* $var1

expr $var1 \> $var2
expr $var1 \< $var2
expr $var1 \<= $var2

expr 1 + 2
expr \( 1 + 2 \) \* 3
expr 1 == 0


