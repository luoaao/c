/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：02_malloc.c
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

void function(char **q)
{

	strcpy(*q, "hello world");
	
	puts(*q);
	
	printf("q = %p\n", *q);
	free(*q);
	*q = NULL;
	printf("q = %p\n", *q);
}

int main()
{

	char *p = (char *)malloc(100);

	function(&p); // 让p释放之后能指向NULL,形参要修改实参的值，所以传实参的地址
	
	printf("p = %p\n", p);
	//p = NULL;

	return 0;
}
