/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：05_fgetc.c
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
	FILE *fp = fopen("test.txt", "r");
	if(fp == NULL){
		perror("fopen");
		return -1;
	}
	//读取字符
	while(1){
		int ret = fgetc(fp);
		if(ret == EOF){
			printf("ret = %d\n", ret);
			printf("读取失败或者读到文件的末尾:\n");
			break;
		}
		printf("ret = %c --> %d\n", ret, ret);
	}

	fclose(fp);

	return 0;
}
