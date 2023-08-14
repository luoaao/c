/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：link_queue.h
 *   创 建 者：JiangCX
 *   创建日期：2023年08月14日
 *   描    述：
 *
 *   更新日志：
 *
 ================================================================*/
#ifndef _LINK_QUEUE_H
#define _LINK_QUEUE_H

#include "tree.h"

typedef tree_t * data_t ;
typedef struct Node{
	data_t data;
	struct Node *next;
}link_t;

typedef struct{
	link_t *front;
	link_t *rear;
}lqueue_t;

lqueue_t *lqueueCreate();
int lqueueIsEmpty(lqueue_t *queue);
int lqueueGetLength(lqueue_t *queue);
int lqueueShow(lqueue_t *queue);
int lqueue_En(lqueue_t *queue, data_t data);
data_t lqueue_De(lqueue_t *queue);
void lqueueClear(lqueue_t *queue);
void lqueueDestroy(lqueue_t **queue);

#endif
