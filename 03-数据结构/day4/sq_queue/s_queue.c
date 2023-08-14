/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：s_queue.c
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

#include "s_queue.h"

sq_t *squeueCreate()
{
	sq_t *queue = (sq_t *)malloc(sizeof(sq_t));
	if(NULL == queue){
		return NULL;
	}
	memset(queue->data, 0, sizeof(queue->data));
	queue->rear = 0;
	queue->front = 0;

	return queue;
}

int squeueIsEmpty(sq_t *queue)
{
	if(queue == NULL){
		return -1;
	}
	
	return queue->rear == queue->front;
}

int squeueIsFull(sq_t *queue)
{
	if(queue == NULL){
		return -1;
	}
	return (queue->rear + 1) % SIZE == queue->front;
}

int squeueGetLength(sq_t *queue)
{
	if(queue == NULL){
		return -1;
	}

	return (queue->rear - queue->front + SIZE) % SIZE;
}

int squeue_En(sq_t *queue, data_t data)
{
	if(queue == NULL){
		return -1;
	}
	if(squeueIsFull(queue)){
		printf("queue full\n");
		return -1;
	}
	//queue->rear 表示队列最后一个元素的后一个位置的下标;
	queue->data[queue->rear] = data;
	
	queue->rear = (queue->rear + 1) % SIZE;

	return 0;
}

int squeue_De(sq_t *queue)
{
	if(queue == NULL){
		return -1;
	}
	if(squeueIsEmpty(queue)){
		printf("is Empty:\n");
		return -1;
	}
	data_t data = queue->data[queue->front];
	queue->front = (queue->front + 1) % SIZE;
	
	return data;
}

void squeueShow(sq_t *queue)
{
	if(NULL == queue){
		return;
	}
	int i = 0;
	for(i = queue->front; i < queue->rear; i = (i + 1)%SIZE){
		printf("%d ", queue->data[i]);
	}
	puts("");
}
void squeueClear(sq_t *queue)
{
	if(NULL == queue){
		return;
	}
	
	//queue->rear = queue->front;
	//queue->front = queue->rear;
	queue->front = queue->rear = 0;
}

void squeueDestroy(sq_t **queue)
{
	squeueClear(*queue);
	free(*queue);
	*queue = NULL;
}
