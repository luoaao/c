/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：05_gdb.c
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

void revert(char *p, char *q);

int main()
{
	char buf[32] = "hello world";
	char new[32] = {0};

	revert(buf, new);

	puts(new);


	return 0;
}

void revert(char *p, char *q)
{
	int len = strlen(p);
	int i = 0;

	for(; i < len; i++){
		q[i] = p[len-i-1];
	}
	
	return;
}

