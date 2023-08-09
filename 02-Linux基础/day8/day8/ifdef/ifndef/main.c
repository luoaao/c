/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：main.c
*   创 建 者：JiangCX
*   创建日期：2023年08月09日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "max.h"
#include "Tmax.h"

int main()
{
	int a = 10, b = 20, c = 100;

	int ret = func_max(a, b);
	
	printf("max: %d\n", ret);
	
	printf("max: %d\n", Tmax(a, b, c));

	return 0;
}
