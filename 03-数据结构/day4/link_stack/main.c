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

#include "link_stack.h"

int main()
{
	lstack_t *lstack = lstackCreate();
	if(NULL == lstack){
		printf("lstackCreate failed....\n");
		return -1;
	}
	printf("lstack create success.....\n");
	
	printf("empty: %d\n", lstackIsEmpty(lstack));
	
	int i = 0;
	for(i = 1; i <= 5; i++){
		lstackPush(lstack, i);
	}
	
	printf("empty: %d\n", lstackIsEmpty(lstack));
	printf("top: %d\n", lstackGetTopData(lstack)->data);
	
	lstackShow(lstack);
	printf("len = %d\n", lstackGetLength(lstack));
	
	//lstackClear(lstack);

	for(i = 0; i < 3; i++){
		int data = lstackPop(lstack);
		printf("出栈: %d\n", data);
		lstackShow(lstack);
	}
	printf("len = %d\n", lstackGetLength(lstack));
	
	
	lstackDestroy(&lstack);

	return 0;
}
