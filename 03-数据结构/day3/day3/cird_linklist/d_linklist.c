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
	head->prior = head;
	head->next = head;

	return head;
}

int D_linkGetLength(link_t *head)
{
	if(head == NULL){
		return -1;
	}
	int len = 0;
	link_t *p = head->next;
	while(p != head){
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
	return head->next == head;
}
int D_linkInsertPos(link_t *head, int pos, data_t data)
{
	//1.判断链表是否存在
	if(NULL == head){
		return -1;
	}
	//3.找到插入位置前一个节点
	link_t *p  = head;
	int i = 0;
	if(pos >= 0){
		for(i = 0; i < pos; i++){
			p = p->next;
		}
	}else{
		for(i = pos; i < 0; i++){
			p = p->prior;
		}
	}
	
	link_t *new = (link_t *)malloc(sizeof(link_t));
	new->data = data;
	
	new->next = p->next;
	p->next->prior = new;
	p->next = new;
	new->prior = p;

	return 0;
}
void D_linkShow(link_t *head)
{
	if(head == NULL){
		return;
	}
	link_t *p = head->next;

	while(p != head){
		printf("%d ", p->data);
		p = p->next;
	}
	puts("");

	return;
}	

int D_linkDeletePos(link_t *head, int pos)
{
	//判断链表是否存在
	if(head == NULL){
		return -1;
	}
	
	if(D_linkIsEmpty(head)){
		return -1;
	}
	link_t *p = head;

	int i = 0;
	if(pos >= 0){
		for(i = 0; i <= pos; i++){
			p = p->next;
			if(p == head){
				p = p->next;
			}
		}	
	}else{
		for(i = pos; i < 0; i++){
			p = p->prior;
			if(p == head){
				p = p->prior;
			}
		}
	}

	//删除p节点
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);

	return 0;

}

