/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：const.c
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

const int var = 10;

int main()
{
	//var = 100;
	//int *p = (int *)&var;
	//*p = 100; error var 只读
	
	const int var1 = 10;
	//var1 = 100;
	
	int *q = (int *)&var1;
	*q = 100;

	printf("var1 = %d\n", var1);

	return 0;
}
