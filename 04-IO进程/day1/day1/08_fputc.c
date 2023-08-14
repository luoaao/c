/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：08_fputc.c
*   创 建 者：JiangCX
*   创建日期：2023年08月16日
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
	FILE *fp = fopen("test.txt", "a+");
	if(fp == NULL){
		perror("fopen");
		return -1;
	}
	
	fputc('P', fp);
	int ret = fgetc(fp);
	printf("ret = %d\n", ret);

	fclose(fp);

	return 0;
}
