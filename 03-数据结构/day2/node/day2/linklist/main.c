/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：main.c
*   创 建 者：JiangCX
*   创建日期：2023年08月11日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "linklist.h"

int main()
{
	link_t *p1 = (link_t *)malloc(sizeof(link_t));
	p1->data = 10;

	link_t *p2 = (link_t *)malloc(sizeof(link_t));
	p1->next = p2;
	p2->data = 20;
	
	link_t *p3 = (link_t *)malloc(sizeof(link_t));
	p2->next = p3;
	p3->data = 30;
	
	link_t *p4 = (link_t *)malloc(sizeof(link_t));
	p3->next = p4;
	p4->data = 40;
	p4->next = NULL;

	link_t *new = (link_t *)malloc(sizeof(link_t));
	new->data = 25;
	p2->next = new;
	new->next = p3;

	link_t *p = p1;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	
	puts("");

	return 0;
}
