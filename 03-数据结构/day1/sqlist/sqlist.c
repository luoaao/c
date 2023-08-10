/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：sqlist.c
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

#include "sqlist.h"

sqlist_t *sqlistCreate()
{
	//1. 分配一个结构体大小的空间
	sqlist_t *sqlist = (sqlist_t *)malloc(sizeof(sqlist_t));
	if(NULL == sqlist){
		printf("malloc failed....\n");
		return NULL;
	}
	memset(sqlist->data, 0, sizeof(sqlist->data));
	sqlist->index = -1;

	return sqlist;
}

int sqlistGetLength(sqlist_t *sqlist)
{
	return sqlist->index + 1;
}

int sqlistIsFull(sqlist_t *sqlist)
{
	/*if(sqlist->index == SIZE-1){
		return 1;
	}else{
		return 0;
	}*/
	if(NULL == sqlist){
		return -1;
	}
	return (sqlist->index == SIZE - 1) ? 1 : 0;
}

int sqlistIsEmpty(sqlist_t *sqlist)
{
	if(NULL == sqlist){
		return -1;
	}
	
	return sqlist->index == -1;
}

int sqlistInsertPos(sqlist_t *sqlist, data_t data, int pos)
{
	//1.判断表是否存在
	if(NULL == sqlist){
		return -1;
	}
	//2.判满
	if(sqlistIsFull(sqlist)){
		printf("sqlist is full\n");
		return -1;
	}
	//3.判断位置是否合法
	int len = sqlistGetLength(sqlist);
	if(pos < 0 || pos > len){
		printf("pos error...\n");
		return -1;
	}
	//4.空出要插入的位置
	int i = 0;
	for(i = len - 1; i >= pos; i--){
		sqlist->data[i+1] = sqlist->data[i];
	}
	//5.插入数据
	sqlist->data[pos] = data;
	//6.表尾指针加一
	sqlist->index++;

	return 0;
}

void sqlistShow(sqlist_t *sqlist)
{
	if(NULL == sqlist){
		return;
	}
	
	int i = 0;
	for(; i <= sqlist->index; i++){
		printf("%-3d", sqlist->data[i]);
	}
	puts("");
}

