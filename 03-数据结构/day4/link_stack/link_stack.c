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

#include "link_stack.h"

lstack_t *lstackCreate()
{
	lstack_t *top = (lstack_t *)malloc(sizeof(lstack_t));
	if(top == NULL){
		return NULL;
	}
	
	top->data = -1;
	top->next = NULL;

	return top;
}

int lstackIsEmpty(lstack_t *top)
{
	if(NULL == top){
		return -1;
	}
	
	return top->next == NULL;
}

lstack_t *lstackGetTopData(lstack_t *top)
{
	if(NULL == top){
		return NULL;
	}

	return top->next;
}

int lstackPush(lstack_t *top, data_t data)
{
	if(NULL == top){
		return -1;
	}
	lstack_t *new = (lstack_t *)malloc(sizeof(lstack_t));
	new->data = data;
	
	new->next = top->next;
	top->next = new;

	return 0;
	
}
void lstackShow(lstack_t *top)
{
	if(NULL == top){
		return;
	}
	lstack_t *p = top->next;

	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	puts(" ");
}

int lstackGetLength(lstack_t *top)
{
	if(NULL == top){
		return -1;
	}
	int len = 0;
	lstack_t *p = top->next;
	
	while(p != NULL){
		len++;
		p = p->next;
	}

	return len;
}

data_t lstackPop(lstack_t *top)
{
	if(NULL == top){
		return (data_t)-1; 
	}
	
	if(lstackIsEmpty(top)){
		return (data_t)-1;
	}

	lstack_t *p = top->next;
	data_t data = p->data;

	top->next = p->next;

	free(p);

	return data;
}

void lstackClear(lstack_t *top)
{
	if(NULL == top){
		return;
	}
	while(!lstackIsEmpty(top)){
		lstackPop(top);
	}

	return;
}

void lstackDestroy(lstack_t **top)
{
	lstackClear(*top);
	free(*top);
	*top = NULL;
}
