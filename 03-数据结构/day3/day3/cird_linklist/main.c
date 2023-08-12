/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：main.c
*   创 建 者：JiangCX
*   创建日期：2023年08月12日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "d_linklist.h"

int main()
{
	
	link_t * head = D_linkCreate();
	if(head == NULL){
		printf("create failed.....\n");
		return -1;
	}
	printf("create success......\n");
	
	printf("len: %d\n", D_linkGetLength(head));
	printf("Empty: %d\n", D_linkIsEmpty(head));
	
	int i = 10;
	while(i--){
		D_linkInsertPos(head, 0, i+1);
	}
	D_linkShow(head);
	D_linkInsertPos(head, 2, 100);
	D_linkShow(head);
	
	D_linkInsertPos(head, 11, 99);
	D_linkShow(head);
	
	D_linkInsertPos(head, -1, 98);
	D_linkShow(head);
	
	D_linkInsertPos(head, -2, 96);
	D_linkShow(head);

	D_linkDeletePos(head, 13);
	D_linkShow(head);
	D_linkDeletePos(head, -1);

	D_linkDeletePos(head, 13);
	D_linkShow(head);
	
	D_linkDeletePos(head, -14);
	D_linkShow(head);


	return 0;
}
