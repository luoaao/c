var1 = abc
var2 = $(var1)
var1 = def

var ?= abc
var ?= def

str = abc
str1 = def
str += $(str1)

a := abc
b := $(a)
a := def

all:
	@echo "var1 = $(var1)" # def
	@echo "var2 = $(var2)" # def makefile 直接赋值会取最新的值
	
	@echo "var = $(var)" # abc
	@echo "str = $(str)" # adcdef
	@echo "b = $(b)" # adcdef

