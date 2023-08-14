/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：06_fgetc.c
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
	printf("请输入一个字符:\n");
	char ret = fgetc(stdin);

	printf("ret = %c ---> %d\n", ret, ret);

	return 0;
}
