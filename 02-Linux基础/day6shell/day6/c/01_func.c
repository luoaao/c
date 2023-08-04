/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：01_func.c
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
	*q = (char *)malloc(100);
	if(q == NULL){
		return;
	}
}

int main()
{
	char *p;
	function(&p); //让p指向一片有效的空间，形参要修改实参所以传实参的地址

	strcpy(p, "hello world");

	puts(p);
	
	free(p);
	p = NULL;

	return 0;
}
