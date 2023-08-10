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

sqlist_t *sqlistCreate();
int sqlistGetLength(sqlist_t *sqlist);
int sqlistIsFull(sqlist_t *sqlist);
int sqlistIsEmpty(sqlist_t *sqlist);
int sqlistInsertPos(sqlist_t *sqlist, data_t data, int pos);
void sqlistShow(sqlist_t *sqlist);

//按位置删除
int sqlistDeletePos(sqlist_t *sqlist, int pos);
//按数据查找
int sqlistResachPos(sqlist_t *sqlist, data_t data);
//更新
int sqlistupdataData(sqlist_t *sqlist, data_t olddata, data_t newdata);
//表的清空
int sqlistclear(sqlist_t sqlist);
//表的销毁
int sqlistDestroy(sqlist_t *sqlist);


#endif
