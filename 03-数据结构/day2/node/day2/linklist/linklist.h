/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：link.h
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

typedef struct Node{
	data_t data;//数据域
	struct Node *next; //指针域
}link_t;

//1.创建链表表
link_t *linkCreate();
//2.求链表的长度
int linkGetLength(link_t *link);
//3.判满
int linkIsFull(link_t *link);
//4.判空
int linkIsEmpty(link_t *link);
//5.按位置插入
int linkInsertPos(link_t *link, data_t data, int pos);
//6.遍历表
void linkShow(link_t *link);

//按位置删除
int linkDeletePos(link_t *link, int pos);
//按数据查找
int linkSearchData(link_t *link, data_t data);
//更新
int linkUpdataData(link_t *link, data_t olddata, data_t newdata);
//表的清空
int linkClear(link_t *link);
//表的销毁
int linkDestroy(link_t **link);

//按数据删除
void linkDeleteData(link_t *link, data_t data);

//按位置查找
data_t linkSearchPos(link_t *link, int pos);
//按位置更新
int linkUpdataPos(link_t *link, int pos, data_t data);
//排序
void linkSort(link_t *link); 

#endif
