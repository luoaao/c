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

#include "s_queue.h"

int main()
{

	sq_t *queue = squeueCreate();
	if(queue == NULL){
		printf("caeate failed....\n");
		return -1;
	}
	printf("queue create success....\n");
	

	if(squeueIsEmpty(queue)){
		printf("queue is Empty\n");
	}
	
	printf("len = %d\n", squeueGetLength(queue));
	
	int i = 0;
	for(i = 1; i <= 6; i++){
		if(-1 == squeue_En(queue, i)){
			return -1;
		}
		printf("rear: %d\n", queue->rear);
		printf("len = %d\n", squeueGetLength(queue));
	}

	squeueShow(queue);
	for(i = 0; i < 3; i++){
		printf("data = %d\n", squeue_De(queue));
		printf("front: %d rear: %d\n", queue->front, queue->rear);
		printf("len = %d\n", squeueGetLength(queue));
	}
	squeueShow(queue);
	
	squeueClear(queue);
	squeueShow(queue);
	printf("len = %d\n", squeueGetLength(queue));


	squeueDestroy(&queue);

	return 0;
}

