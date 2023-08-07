/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：06_define.c
*   创 建 者：JiangCX
*   创建日期：2023年08月08日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#define INT_t int

typedef int int_t;

int main()
{
	//INT_t var = 10;
	int_t var = 100;

	printf("var = %d sizeof(var) = %ld\n", var, sizeof(var));


	return 0;
}
