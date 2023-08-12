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

typedef struct{
	data_t data[SIZE];
	int top;
}stack_t;

stack_t *stackCreate();

int stackIsEmpty(stack_t *stack);

int stackIsFull(stack_t *stack);

data_t stackGetTopData(stack_t *stack);

int stackPush(stack_t *stack, data_t data);

void stackShow(stack_t *stack);

int stackGetLength(stack_t *stack);

data_t stackPop(stack_t *stack);

void stackClear(stack_t *stack);

void stackDestroy(stack_t **stack);

#endif
