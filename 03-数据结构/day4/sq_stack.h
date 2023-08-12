#ifndef _SQ_STACK_H
#define _SQ_STACK_H

#define SIZE 100
typedef int data_t;
typedef struct sta{
	data_t data[SIZE];
	int top;
}stack_t;

stack_t *stackCreate();

int stackIsRmpty(stack_t *stack);

int stackIsFull(stack_t *stack);

data_t stackGetTopData(stack_t *stack);

int stadkPush(stack_t *stack, data_t data);

#endif
