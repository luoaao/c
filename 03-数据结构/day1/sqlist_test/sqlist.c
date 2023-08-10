#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sqlist.h"

sqlist_t *sqlistCreate()
{
	sqlist_t *sqlist = (sqlist_t *)malloc(sizeof(sqlist_t));
	if(NULL == sqlist){
		printf("failed....\n");
		return NULL;
	}
	memset(sqlist->data, 0, sizeof(sqlist->data));
	sqlist->index = -1;
	return sqlist;
}

int sqlistGetLength(sqlist_t *sqlist)
{
	return sqlist->index+1;
}

int sqlistIsFull(sqlist_t *sqlist)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	return sqlist->index == SIZE;
	
}

int sqlistIsEmpty(sqlist_t *sqlist)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	return sqlist->index == -1;

}

int  sqlistInsertPos(sqlist_t *sqlist, data_t data, int pos)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	if(sqlistIsFull(sqlist)){
		printf("sqlist is full...\n");
		return -1;
	}	
	int len = sqlistGetLength(sqlist);
	if(pos < 0 || pos > len){
		printf("  pos is    error       ");
		return -1;
	}
	int i = 0;
	for(i = len-1; i>=pos;i--){
	sqlist->data[i+1] = sqlist->data[i];
	}

	sqlist->data[pos] = data;

	sqlist->index++;
	return 0;

}

void sqlistShow(sqlist_t *sqlist)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return;
	}
	int i = 0;
	printf("\n表内数据：  ");
	for(; i<=sqlist->index; i++){
		printf("%-3d",sqlist->data[i]);
	}
	puts("");
}

int sqlistDeletePos(sqlist_t *sqlist, int pos)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	if(sqlistIsFull(sqlist)){
		printf("sqlist is full...\n");
		return -1;
	}	
	int len = sqlistGetLength(sqlist);
	if(pos < 0 || pos > len-1){
		printf("  pos is    error       ");
		return -1;
	}
	int i = pos;
	for(;i<=sqlist->index-1;i++){
		sqlist->data[i] = sqlist->data[i+1];
	}
	sqlist->index--;
	return 0;

	
}
int sqlistResachPos(sqlist_t *sqlist , data_t data)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	if(sqlistIsFull(sqlist)){
		printf("sqlist is full...\n");
		return -1;
	}	
	int i = 0,resu = 1;
	for(;i<sqlist->index;i++){
		if(sqlist->data[i] == data){
			printf("%d的位置为:",data);
			printf(" %d \n",i);
			resu = 0;
		}
	}
	if (resu){
		printf("未找到该元素\n");
		return -1;
	}
	else{
		return 0;
	}
}

int sqlistUpdateData(sqlist_t *sqlist, data_t olddata, data_t newdata)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	if(sqlistIsFull(sqlist)){
		printf("sqlist is full...\n");
		return -1;
	}	
	int i = 0,resu = 1;
	for(;i<sqlist->index;i++){
		if(sqlist->data[i] == olddata){
			sqlist->data[i] = newdata;
			resu = 0;
		}
	}
	if (resu){
		printf("未找到该元素\n");
		return -1;
	}
	else{
		return 0;
	}
}

int sqlistClrar(sqlist_t *sqlist)
{	
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	if(sqlist->index==-1){
		printf("空表\n");
		return -1;
	}
	memset(sqlist->data, 0, sizeof(sqlist->data));
	sqlist->index = -1;
	return 0;
}

int sqlistDestroy(sqlist_t *sqlist)
{
	if(NULL==sqlist){
		printf("表不存在\n");
		return -1;
	}
	free(sqlist);
	sqlist = NULL;
	return 0;	
}