/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：main.c
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

#include "link_queue.h"

int main()
{
	lqueue_t *queue = lqueueCreate();
	if(queue == NULL){
		printf("queueCreate failed....\n");
		return -1;
	}
	printf("queueCreate success.....\n");
	
	int i = 1;
	for(; i < 6; i++){
		lqueue_En(queue, i);
	}
	
	lqueueShow(queue);
	printf("len = %d\n", lqueueGetLength(queue));
	//lqueueClear(queue);
	printf("len = %d\n", lqueueGetLength(queue));
	for(i = 0; i < 5; i++){
		printf("data: %d\n", lqueue_De(queue));
		printf("len = %d\n", lqueueGetLength(queue));
		lqueueShow(queue);
	}
	lqueue_De(queue);
	
	lqueueDestroy(&queue);
	
	return 0;
}
