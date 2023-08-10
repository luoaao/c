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
	if(NULL == sqlist){
		return -1;
	}
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

//按位置删除
int sqlistDeletePos(sqlist_t *sqlist, int pos)
{
	//1.判断表是否存在
	if(NULL == sqlist){
		return -1;
	}
	//2.判断表是否是空表
	if(sqlistIsEmpty(sqlist)){
		return -1;
	}
	//3.判断位置是否合法
	int len = sqlistGetLength(sqlist);
	if(pos < 0 || pos > len-1){
		return -1;
	}
	//4.删除( 把要删除的位置后面的所有数往前移动一个位置)
	int i = 0;
	for(i = pos; i < len-1; i++){
		sqlist->data[i] = sqlist->data[i+1];
	}
	//表尾指针减一
	sqlist->index--;

	return 0;
}
//按数据查找
int sqlistSearchData(sqlist_t *sqlist, data_t data)
{
	//1.判断表是否存在
	if(sqlist == NULL){
		return -1;
	}
	//遍历表
	int i = 0;
	for(i = 0; i <= sqlist->index; i++){
		if(sqlist->data[i] == data){
			return i;
		}
	}
	return -1;
}

//更新
int sqlistUpdataData(sqlist_t *sqlist, data_t olddata, data_t newdata)
{
	if(sqlist == NULL){
		return -1;
	}
	//判断数据是否存在
	int pos = sqlistSearchData(sqlist, olddata);
	if(pos < 0){
		return -1;
	}
	sqlist->data[pos] = newdata;

	return 0;
}

//表的清空
int sqlistClear(sqlist_t *sqlist)
{
	if(NULL == sqlist){
		return -1;
	}
	sqlist->index = -1;
	
	return 0;
}

//表的销毁
int sqlistDestroy(sqlist_t **sqlist)
{
	if(NULL == *sqlist){
		return -1;
	}
	sqlistClear(*sqlist);
	free(*sqlist);
	*sqlist = NULL;

	return 0;
}

void sqlistDeleteData(sqlist_t *sqlist, data_t data)
{
	if(sqlist == NULL){
		return;
	}
	int pos = sqlistSearchData(sqlist, data);
	if(pos == -1){
		return;
	}
	sqlistDeletePos(sqlist, pos);
	
	return;
}
//按位置查找
data_t sqlistSearchPos(sqlist_t *sqlist, int pos)
{
	if(NULL == sqlist){
		return (data_t)-1;
	}

	if(pos < 0 || pos > sqlistGetLength(sqlist) - 1){
		return (data_t)-1;
	}
	return sqlist->data[pos];
}

//按位置更新
int sqlistUpdataPos(sqlist_t *sqlist, int pos, data_t data)
{
	if(NULL == sqlist){
		return -1;
	}

	if(pos < 0 || pos > sqlistGetLength(sqlist) - 1){
		return -1;
	}

	sqlist->data[pos] = data;

	return 0;
}
//排序
void sqlistSort(sqlist_t *sqlist)
{
	if(NULL == sqlist){
		return;
	}

	int i, j, len = sqlistGetLength(sqlist);
	
	for(i = 0; i < len-1; i++){
		for(j = 0; j < len-1-i; j++){
			if(sqlist->data[j] > sqlist->data[j+1]){
				int t = sqlist->data[j];
				sqlist->data[j] = sqlist->data[j+1];
				sqlist->data[j+1] = t;
			}
		}
	}
	return ;

}

