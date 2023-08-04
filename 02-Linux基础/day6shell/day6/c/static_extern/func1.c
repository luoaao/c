/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：func1.c
*   创 建 者：JiangCX
*   创建日期：2023年08月04日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

extern int var; //var 被static 不能再次外部说明了

void func(); //说明这个函数

int main()
{

	//printf("var = %d\n", var);
	
	func();

	return 0;
}
