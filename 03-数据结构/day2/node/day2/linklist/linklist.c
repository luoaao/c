/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：linklist.c
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

link_t *linkCreate()
{
	link_t *head = (link_t *)malloc(sizeof(link_t));
	head->data = -1;
	head->next = NULL;

	return head; //将头结点返回
}
