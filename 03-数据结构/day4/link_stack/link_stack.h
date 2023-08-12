/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：sq_stack.h
*   创 建 者：JiangCX
*   创建日期：2023年08月14日
*   描    述：
*
*   更新日志：
*
================================================================*/
#ifndef _SQ_STACK_H
#define _SQ_STACK_H

#define SIZE 100
typedef int data_t;

typedef struct Node{
	data_t data;
	struct Node *next;
}lstack_t;

lstack_t *lstackCreate();

int lstackIsEmpty(lstack_t *top);

int lstackIsFull(lstack_t *top);

lstack_t *lstackGetTopData(lstack_t *top);

int lstackPush(lstack_t *top, data_t data);

void lstackShow(lstack_t *top);

int lstackGetLength(lstack_t *top);

data_t lstackPop(lstack_t *top);

void lstackClear(lstack_t *top);

void lstackDestroy(lstack_t **top);

#endif
