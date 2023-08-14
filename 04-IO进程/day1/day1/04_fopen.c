/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：04_fopen.c
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

#include <errno.h>

int main()
{
	//int count = 0;
	//while(1){
		FILE *fp = fopen("test.txt", "w");
		if(fp == NULL){
			//printf("fopen failed...\n");
			//printf("fopen: %s\n", strerror(errno));

			//向标准错误输出fopen调用错误的具体原因
			//fprintf(stderr, "fopen: %s\n", strerror(errno));
			perror("fopen");

			return -1;
		}
	//	count++;
		printf("fopen success......\n");
		fclose(fp);
	//}
	return 0;
}
