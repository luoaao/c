/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：link_queue.c
*   创 建 者：JiangCX
*   创建日期：2023年08月14日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "link_queue.h"

lqueue_t *lqueueCreate()
{
	link_t *head = (link_t *)malloc(sizeof(link_t));
	if(NULL == head){
		return NULL;
	}
	head->data = -1;
	head->next = NULL;

	lqueue_t *queue = (lqueue_t *)malloc(sizeof(lqueue_t));
	queue->front = head;
	queue->rear = head;

	return queue;
}

int lqueueIsEmpty(lqueue_t *queue)
{
	if(queue == NULL){
		return -1;
	}
	
	return queue->front == queue->rear;
}

int lqueueGetLength(lqueue_t *queue)
{
	if(NULL == queue){
		return -1;
	}
	int len = 0;
	link_t *p = queue->front;

	while(p != queue->rear){
		len++;
		p = p->next;
	}
	
	return len;
}

int lqueueShow(lqueue_t *queue)
{
	if(NULL == queue){
		return -1;
	}
	link_t *p = queue->front;
	while(p != queue->rear){
		printf("%d ", p->next->data);
		p = p->next;
	}
	puts("");

	return 0;
}
int lqueue_En(lqueue_t *queue, data_t data)
{
	if(NULL == queue){
		return -1;
	}
	link_t *new = (link_t *)malloc(sizeof(link_t));
	new->data = data;
	
	new->next = queue->rear->next;
	queue->rear->next = new;
	
	queue->rear = queue->rear->next;
	
	return 0;
}

int lqueue_De(lqueue_t *queue)
{
	if(NULL == queue){
		return -1;
	}
	if(lqueueIsEmpty(queue)){
		printf("is empty\n");
		return -1;
	}
	link_t *p = queue->front->next;
	data_t data = p->data;
	
	queue->front->next = p->next;
	free(p);
	if(queue->front->next == NULL){
		queue->rear = queue->front;
	}

	return data;
}

void lqueueClear(lqueue_t *queue)
{
	if(NULL == queue){
		return;
	}
	while(!lqueueIsEmpty(queue)){
		lqueue_De(queue);
	}
	return;		
}

void lqueueDestroy(lqueue_t **queue)
{
	if(NULL == *queue){
		return;
	}
	lqueueClear(*queue);

	free((*queue)->front);
	free(*queue);
	*queue = NULL;
}

