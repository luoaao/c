#!/bin/bash

str="hflloworldhello"

expr match $str "hello"
expr match $str "ello"
expr substr $str 3 4
expr length $str

str="hflloworldhello"
#expr index $str "ad"

str="www.baidu.com"
expr index $str "bai"
