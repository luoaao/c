/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：01_printf.c
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

#include <unistd.h>

int main()
{
#if 0	
	printf("hello world");
	
	while(1); //缓冲区没有写满，不执行写操作
#endif
#if 0
	while(1){//缓冲区写满刷新缓冲区
		usleep(1000);
		printf("hello world");
	}
#endif
#if 0
	printf("hello world");//程序结束会自动刷新缓冲区
#endif
#if 0
	printf("hello world");
	fflush(stdout); //强制刷新标准输出流
	printf("AAAAA");
	while(1);
#endif
#if 0
	printf("hello world\n"); //行缓冲遇到'\n'会自动刷新
	while(1);
#endif
	int num;
	printf("请输入一个数");
	scanf("%d", &num);
#if 1

#endif
	return 0;
}
