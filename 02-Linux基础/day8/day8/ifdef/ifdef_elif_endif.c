/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：ifdef_elif_endif.c
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

//#define AAA
#define BBB 1
int main()
{
#ifdef AAA
	printf("AAA\n");
#elif BBB
	printf("BBB\n");
#elif CCC
	printf("CCC\n");
#else
	printf("DDD\n");
#endif
	return 0;
}
