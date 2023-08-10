/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：demo.c
*   创 建 者：JiangCX
*   创建日期：2023年08月10日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#define SIZE 100

int main()
{
	typedef struct{
		int data[SIZE];
		int index;
	}sqlist_t;


	sqlist_t sqlist;
	memset(sqlist.data, 0, sizeof(sqlist.data));

	/*int i = 0;
	for(; i < SIZE; i++){
		printf("%d \n", sqlist.data[i]);
	}*/
	sqlist.index = -1;

	int len = sqlist.index + 1;
	printf("len = %d\n", len);

	sqlist.index++;
	sqlist.data[sqlist.index] = 10;

	sqlist.index++;
	sqlist.data[sqlist.index] = 20;

	sqlist.index++;
	sqlist.data[sqlist.index] = 30;
	
	int pos = 1;
	int i = 0;
	
	for(i = sqlist.index; i >= pos; i--){
		sqlist.data[i+1] = sqlist.data[i];
	}
	sqlist.data[pos] = 15;
	sqlist.index++;

	len = sqlist.index + 1;
	printf("len = %d\n", len);
	for(i = 0; i < len; i++){
		printf("%-3d", sqlist.data[i]);
	}
	puts("");







	/*
	int arr[SIZE] = {0};
	int index = -1;
	index++;
	arr[index] = 10;

	index++;
	arr[index] = 20;
	
	int i = 0;
	for(; i <= index; i++){
		printf("%-3d", arr[i]);
	}
	puts("");
	*/

	return 0;
}
