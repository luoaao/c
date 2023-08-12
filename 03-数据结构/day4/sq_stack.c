#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sq_stack.h"

stack_t *stackCreate()
{
	stack_t *stack = (stack_t *)malloc(sizeof(stack_t));
	if(NULL == stack){
		printf("malloc err ....\n");
		return NULL;
	}
	memset(stack->data, 0, sizeof(stack->data));
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
	return stack->top == SIZE-1;
}

data_t stackGetTopData(stack_t *stack)
{
	if(NULL == stack){
		return (data_t) -1;
	}
	return stack->data[stack->top];
	
}

int stackPush(stack_t *stack, data_t data)
{
	if(NULL == stack){
		return -1;
	}
	if(stackIsFull(stack)){
		printf("full....\n");
	}
	stack->top++;
	stack->data[stack->top] = data;
	return 0;
	
}

