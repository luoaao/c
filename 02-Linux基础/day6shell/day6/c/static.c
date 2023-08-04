/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：static.c
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

char *func()
{
	static char buf[32] = {"123456"};

	return buf;
}

int main()
{
#if 0
	int i = 0;
	for(; i < 5; i++){
		static int var = 0;
		printf("var = %d\n", var);
		var++;
	}
#endif
	char *ret = func();

	puts(ret);

	return 0;
}
