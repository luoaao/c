/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：sqlist.h
*   创 建 者：JiangCX
*   创建日期：2023年08月10日
*   描    述：
*
*   更新日志：
*
================================================================*/
#ifndef _SQLIST_H
#define _SQLIST_H

#define SIZE 100
typedef int data_t;

typedef struct{
	data_t data[SIZE];//数据
	int index; //表尾指针
}sqlist_t;

//1.创建顺序表
sqlist_t *sqlistCreate();
//2.求顺序表的长度
int sqlistGetLength(sqlist_t *sqlist);
//3.判满
int sqlistIsFull(sqlist_t *sqlist);
//4.判空
int sqlistIsEmpty(sqlist_t *sqlist);
//5.按位置插入
int sqlistInsertPos(sqlist_t *sqlist, data_t data, int pos);
//6.遍历表
void sqlistShow(sqlist_t *sqlist);

//按位置删除
int sqlistDeletePos(sqlist_t *sqlist, int pos);
//按数据查找
int sqlistSearchData(sqlist_t *sqlist, data_t data);
//更新
int sqlistUpdataData(sqlist_t *sqlist, data_t olddata, data_t newdata);
//表的清空
int sqlistClear(sqlist_t *sqlist);
//表的销毁
int sqlistDestroy(sqlist_t **sqlist);

//按数据删除
void sqlistDeleteData(sqlist_t *sqlist, data_t data);

//按位置查找
data_t sqlistSearchPos(sqlist_t *sqlist, int pos);
//按位置更新
int sqlistUpdataPos(sqlist_t *sqlist, int pos, data_t data);
//排序
void sqlistSort(sqlist_t *sqlist); 

#endif
