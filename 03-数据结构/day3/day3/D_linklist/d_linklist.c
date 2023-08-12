/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
*   文件名称：d_linklist.c
*   创 建 者：JiangCX
*   创建日期：2023年08月12日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "d_linklist.h"

link_t *D_linkCreate()
{
	link_t *head = (link_t *)malloc(sizeof(link_t));
	if(NULL == head){
		printf("malloc falied...\n");
		return NULL;
	}
	head->data = -1;
	head->prior = NULL;
	head->next = NULL;

	return head;
}

int D_linkGetLength(link_t *head)
{
	if(head == NULL){
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

int D_linkIsEmpty(link_t *head)
{
	if(head == NULL){
		return -1;
	}
	return head->next == NULL;
}
int D_linkInsertPos(link_t *head, int pos, data_t data)
{
	//1.判断链表是否存在
	if(NULL == head){
		return -1;
	}
	//2.判断位置是否合法
	int len = D_linkGetLength(head);
	if(pos < 0 || pos > len){
		printf("pos error\n");
		return -1;
	}
	//3.找到插入位置前一个节点
	link_t *p = head;
	int i = 0;
	for(; i < pos; i++){
		p = p->next;
	}
	//4.创建节点并赋值
	link_t *new = (link_t *)malloc(sizeof(link_t));
	new->data = data;

	//5.判断在末尾插入还是在其他位置插入
	if(p->next == NULL) //在末尾插入
	{
		new->next = p->next;
		p->next = new;
		new->prior = p;

	}else{
		new->next = p->next;
		p->next->prior = new;
		p->next = new;
		new->prior = p;
	}
	return 0;
}
void D_linkShow(link_t *head)
{
	if(head == NULL){
		return;
	}
	link_t *p = head->next;
	link_t *q = head->next;

	while(p != NULL){
		printf("%d ", p->data);
		q = p;
		p = p->next;
	}
	puts(" <<< 顺序打印");
	/*
	while(q != head){
		printf("%d ", q->data);
		q = q->prior;
	}
	puts(" <<< 逆序打印");
*/

	return;
}	

int D_linkDeletePos(link_t *head, int pos)
{
	//判断链表是否存在
	if(head == NULL){
		return -1;
	}
	//位置
	int len = D_linkGetLength(head);
	if(pos < 0 || pos > len-1){
		printf("pos error\n");
		return -1;
	}
	//找到要删除的节点的位置
	link_t *p = head->next;
	int i;
	for(i = 0; i < pos; i++){
		p = p->next;
	}
	
	if(p->next == NULL){
		p->prior->next = p->next; //将p的前一个节点指向p的后一个节点(NULL)
		free(p);
	}else{
		p->prior->next = p->next; //将p的前一个节点指向p的后一个节点
		p->next->prior = p->prior;//将p的后一个节点指向前一个节点
		free(p);
	}

	return 0;

}
