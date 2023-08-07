/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：02_demo.c
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

int main()
{

	int var = 0x12345678;

	char *p = (char *)&var;

	printf("%x\n", *p);
	printf("%x\n", *(p+1));

	return 0;
}
