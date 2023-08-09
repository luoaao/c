/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：02_struct.c
*   创 建 者：JiangCX
*   创建日期：2023年08月09日
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
{/*
	typedef struct{
		char ch;
		char ch1;
		int var1;
		int var;
	}S_t;*/

	typedef struct{
		//char buf[33];
		char ch;
		//int var;
		short var2;
		short var3;
		//double var1;
	}S_t;

	S_t AA;

	printf("sizeof(S_t): %ld\n", sizeof(S_t));
	/*printf("%p\n", &AA.ch);
	printf("%p\n", &AA.ch1);
	printf("%p\n", &AA.var1);
	printf("%p\n", &AA.var);*/
	
	//printf("%p\n", &AA.buf[32]);
	//printf("%p\n", &AA.var);
	printf("%p\n", &AA.ch);
	printf("%p\n", &AA.var2);
	printf("%p\n", &AA.var3);
	//printf("%p\n", &AA.var1);
	
	return 0;
}
