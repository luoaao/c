/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：ifndef.c
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

#define AAA

int main()
{
#ifndef AAA
	printf("AAAA\n");
#endif
	printf("BBBB\n");


	return 0;
}
