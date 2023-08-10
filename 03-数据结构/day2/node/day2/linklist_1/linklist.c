/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：linklist.c
*   创 建 者：JiangCX
*   创建日期：2023年08月11日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "linklist.h"

link_t *linkCreate()
{
	link_t *head = (link_t *)malloc(sizeof(link_t));
	if(head == NULL){
		return NULL;
	}
	head->data = -1;
	head->next = NULL;

	return head; //将头结点返回
}


int linkGetLength(link_t *head)
{
	if(NULL == head){
		return -1;
	}
	int len = 0;
	link_t *p = head->next;
	while(p != NULL){
		len++;
		p = p->next;
	}

	return len;
}

//4.判空
int linkIsEmpty(link_t *head)
{
	if(NULL == head){
		return -1;
	}

	return head->next == NULL;
}

//5.按位置插入
int linkInsertPos(link_t *head, data_t data, int pos)
{
	//1.判断链表是否存在
	if(NULL == head){
		return -1;
	}
	//2.判断位置是否合法
	int len = linkGetLength(head);
	if(pos < 0 || pos > len){
		printf("pos error...\n");
		return -1;
	}
	//3.找到要插入位置的前一个节点
	link_t *p = head;
	int i = 0;
	for(i = 0; i < pos; i++){
		p = p->next;
	}
	//4.创建一个节点插入
	link_t *new = (link_t *)malloc(sizeof(link_t));
	new->data = data;

	new->next = p->next; //先将新节点的指针域指向上一个节点的下一个节点
	p->next = new;//让上一个节点指向新节点;

	return 0;
}
//6.遍历表
void linkShow(link_t *head)
{
	if(NULL == head){
		return;
	}
	link_t *p = head->next;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	puts("");
}	

//按位置删除
int linkDeletePos(link_t *head, int pos)
{
	if(NULL == head){
		return -1;
	}
	int len = linkGetLength(head);
	if(pos < 0 || pos > len-1 ){
		return -1;
	}
	link_t *p = head;
	int i = 0;
	for(i = 0; i < pos; i++){
		p = p->next; //将p遍历到要删除节点的前一个节点
	}
	link_t *q = p->next; // 临时保存要删除的这个节点
	p->next = q->next;//将要删除节点的前一个节点指向要删除节点的后一个节点
	free(q);
	
	return 0;
}
//按数据查找 返回这个节点的地址
link_t *linkSearchData(link_t *head, data_t data)
{
	if(NULL == head){
		return NULL;
	}
	
	if(linkIsEmpty(head)){
		return NULL;
	}
	
	link_t *p = head->next;
	while(p != NULL){
		if(p->data == data){
			return p;
		}
		p = p->next;
	}

	return NULL;
}
//更新
int linkUpdataData(link_t *head, data_t olddata, data_t newdata)
{
	//查找要更新的这个数据，找到后会返回这个数据所在节点的首地址
	link_t *p = linkSearchData(head, olddata);
	if(NULL == p){
		return -1;
	}

	p->data = newdata;

	return 0;
}

//表的清空
int linkClear(link_t *head)
{
	if(NULL == head)
	{
		return -1;
	}
	int len = linkGetLength(head);
	int i = 0;
	for(; i < len; i++){
		linkDeletePos(head, 0);
	}
	
	return 0;

}
//表的销毁
int linkDestroy(link_t **head)
{
	linkClear(*head);
	free(*head);
	*head = NULL;
	
	return 0;
}
//按数据删除
void linkDeleteData(link_t *head, data_t data)
{

}

//按位置查找
data_t linkSearchPos(link_t *head, int pos)
{

}
//按位置更新
int linkUpdataPos(link_t *head, int pos, data_t data)
{

}


int linkRevert(link_t *head)
{

}
//排序
void linkSort(link_t *head)
{

}

