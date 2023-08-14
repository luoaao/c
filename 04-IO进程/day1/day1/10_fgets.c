/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：10_fgets.c
*   创 建 者：JiangCX
*   创建日期：2023年08月16日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int main()
{

	printf("请输入一个字符串:\n");
	char buf[5];
	
	fgets(buf, 5, stdin);

	int i = 0;
	for(; i < 5; i++){
		printf("%c -- %d\n", buf[i], buf[i]);
	}

	return 0;
}
