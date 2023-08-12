/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：s_queue.h
*   创 建 者：JiangCX
*   创建日期：2023年08月14日
*   描    述：
*
*   更新日志：
*
================================================================*/
#ifndef _S_QUEUE_H
#define _S_QUEUE_H

#define SIZE 7
typedef int data_t;
typedef struct{
	data_t data[SIZE];
	int front;
	int rear;
}sq_t;

sq_t *squeueCreate();
int squeueIsEmpty(sq_t *queue);
int squeueIsFull(sq_t *queue);
int squeueGetLength(sq_t *queue);
int squeue_En(sq_t *queue, data_t data);
int squeue_De(sq_t *queue);
void squeueShow(sq_t *queue);
void squeueClear(sq_t *queue);
void squeueDestroy(sq_t **queue);

#endif
