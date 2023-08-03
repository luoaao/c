#ifndef _FUN_H_
#define _FUN_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//如果自己写的函数在main后面，需要加函数声明

//函数声明
//在函数头中定义的参数---形参
void fun1(void);
void fun2(int x, int y); //传参的时候，只需要保持数据类型一致即可
int fun3(int a, int b, int c);
void fun4(int *x, int *y);

void fun5(int p, int q);
/*
功能：
参数:
返回值：
*/

#endif

