/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：02_fprintf.c
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
#if 0
	int var = 10;
	fprintf(stdout, "hello world");
	fprintf(stdout, "var = %d", var);
	
	while(1);
#endif
#if 0
	int var = 10;
	fprintf(stderr, "hello world"); //无缓冲
	while(1);
#endif
#if 0
	printf("111111\n");
	fclose(stdout);
	printf("222222\n");
#endif
	printf("stdout: %d\n", stdout->_fileno);
	printf("stdin: %d\n", stdin->_fileno);
	printf("stderr: %d\n", stderr->_fileno);

	return 0;
}
