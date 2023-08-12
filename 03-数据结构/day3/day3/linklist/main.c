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
	link_t *head = linkCreate(); //创建一个有头链表，头结点作为链表的头部，不存有效元素;
	if(head ==NULL){
		printf("linkCreate failed....\n");
		return -1;
	}
	printf("create success.....\n");
	

	printf("empty: %d\n", linkIsEmpty(head));
	printf("len = %d\n", linkGetLength(head));

	int i = 0;
	for(; i < 10; i++){
		linkInsertPos(head, i+1, 0);
	}
	linkShow(head);
	printf("len = %d\n", linkGetLength(head));
	
	linkDeletePos(head, 0);
	linkShow(head);
	linkDeletePos(head, 8);
	linkShow(head);
	linkDeletePos(head, 3);
	linkShow(head);
	
	link_t *p = linkSearchData(head, 30);
	if(p == NULL){
		printf("没有这个数据\n");
	}else{
		printf("查找到的数据为:%d\n", p->data);
	}

	linkUpdateData(head, 3, 300);
	linkShow(head);
	
	int ret = linkDeleteData(head, 300);
	if(ret != 0){
		printf("删除失败\n");
	}else{
		printf("删除成功\n");
	}
	linkShow(head);
	
	printf("%d\n", linkSearchPos(head, 0));
	printf("%d\n", linkSearchPos(head, 6));

	linkUpdatePos(head, 0, 90);
	linkUpdatePos(head, 4, 80);
	linkShow(head);
	
	//linkRevert(head);
	linkShow(head);
	
	linkSort(head);
	linkShow(head);

	printf("len = %d\n", linkGetLength(head));
	linkClear(head);
	printf("len = %d\n", linkGetLength(head));
	
	Joseph(8, 3, 4);

	linkDestroy(&head);

	return 0;
}
