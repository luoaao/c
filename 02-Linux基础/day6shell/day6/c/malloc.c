/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：malloc.c
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

int main()
{
	int n;
	printf("请输入数据的个数:\n");
	scanf("%d", &n);

	//申请空间
	int *p = (int *)malloc(sizeof(int)*n);
	if(NULL == p){
		printf("malloc failed.....\n");
		return -1;
	}

	printf("please enter %d num\n", n);
	int i = 0;
	for(; i < n; i++){
		scanf("%d", p + i);
	}

	for(i = 0; i < n; i++){
		printf("%-3d", p[i]);
	}
	puts("");
	
	
	printf("p = %p\n", p);
	
	free(p);
	p = NULL;
/*
	printf("p = %p\n", p);
	*p = 100;        
	printf("*p = %d\n", *p);*/ 

	return 0;
}
