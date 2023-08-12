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

#include "sq_stack.h"

int main()
{
	stack_t *stack = stackCreate();
	if(NULL == stack){
		printf("stackCreate failed....\n");
		return -1;
	}
	printf("stack create success.....\n");
	
	printf("empty: %d\n", stackIsEmpty(stack));
	
	int i = 0;
	for(i = 1; i <= 5; i++){
		stackPush(stack, i);
	}
	
	printf("empty: %d\n", stackIsEmpty(stack));
	printf("top: %d\n", stackGetTopData(stack));
	
	stackShow(stack);
	printf("len = %d\n", stackGetLength(stack));
	
	//stackClear(stack);

	for(i = 0; i < 3; i++){
		int data = stackPop(stack);
		printf("出栈: %d\n", data);
		stackShow(stack);
	}
	printf("len = %d\n", stackGetLength(stack));
	
	
	stackDestroy(&stack);

	return 0;
}
