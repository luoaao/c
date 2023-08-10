/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：main.c
*   创 建 者：JiangCX
*   创建日期：2023年08月10日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "sqlist.h"

int main()
{
	//创建表
	
	sqlist_t *sqlist = sqlistCreate();
	if( NULL == sqlist ){
		printf("sqlistCreate failed....\n");
		return -1;
	}
	printf("sqlistCreate success......\n");

	
	printf("full: %d\n", sqlistIsFull(sqlist));
	
	printf("empty: %d\n", sqlistIsEmpty(sqlist));
	//插入数据
	int i = 0;
	for(; i < 10; i++){
		sqlistInsertPos(sqlist, i+1, 0);
	}

	//显示数据

	sqlistShow(sqlist);
	sqlistInsertPos(sqlist, 88, 10);
	sqlistShow(sqlist);
	sqlistInsertPos(sqlist, 66, 5);
	sqlistShow(sqlist);

	printf("len = %d\n", sqlistGetLength(sqlist));
	printf("empty: %d\n", sqlistIsEmpty(sqlist));

	return 0;
}
