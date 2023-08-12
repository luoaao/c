/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：sq_stack.c
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

#include "sq_stack.h"

stack_t *stackCreate()
{
	stack_t *stack = (stack_t *)malloc(sizeof(stack_t));
	if(NULL == stack){
		printf("malloc failed....\n");
		return NULL;
	}
	memset(stack->data, 0, sizeof(stack->data));
	stack->top = -1;

	return stack;

}

int stackIsEmpty(stack_t *stack)
{
	if(NULL == stack){
		return -1;
	}
	
	return stack->top == -1;

}

int stackIsFull(stack_t *stack)
{
	if(NULL == stack){
		return -1;
	}

	return stack->top == SIZE - 1;
}

data_t stackGetTopData(stack_t *stack)
{
	if(NULL == stack){
		return (data_t)-1;
	}
	
	return stack->data[stack->top];
}

int stackPush(stack_t *stack, data_t data)
{
	if(NULL == stack){
		return -1;
	}

	if(stackIsFull(stack)){
		printf("stack is full\n");
		return -1;
	}

	stack->top++;
	stack->data[stack->top] = data;

	return 0;
}

void stackShow(stack_t *stack)
{
	if(NULL == stack){
		return;
	}

	int i = 0;
	for(i = stack->top ; i >= 0; i--){
		printf("%d ", stack->data[i]);
	}
	puts("");
	
}

int stackGetLength(stack_t *stack)
{
	if(NULL == stack){
		return -1;
	}

	return stack->top + 1;
}

data_t stackPop(stack_t *stack)
{
	if(NULL == stack){
		return (data_t)-1;
	}
	
	if(stackIsEmpty(stack)){
		return (data_t)-1;
	}
	data_t data = stack->data[stack->top];
	stack->top--;

	return data;

}

void stackClear(stack_t *stack)
{
	if(stack == NULL){
		return;
	}

	stack->top = -1;
	
	return;

}

void stackDestroy(stack_t **stack)
{
	if(stack == NULL){
		return;
	}
	free(*stack);
	*stack = NULL;

}
