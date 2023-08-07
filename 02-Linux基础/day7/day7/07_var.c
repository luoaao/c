/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：07_var.c
 *   创 建 者：JiangCX
 *   创建日期：2023年08月08日
 *   描    述：
 *
 *   更新日志：
 *
 ================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int func(int var)
{
	return var*var;
}

int main()
{
	/*
	   int ;
	   int *;
	   int **;
	   int [10];
	   int *[10];
	   int [2][5];
	   int (*)(int);
	   int (* [3])(int)*/

#if 0
	typedef int * int_p;
	int var = 10; 
	int_p p = &var;

	printf("*p = %d\n", *p);
#endif
#if 0
	typedef int Arr_t[10];
	Arr_t arr={0};
	arr[0] = 100;
	arr[9] = 200;
	int i = 0;
	for(; i < 10; i++){
		printf("%-4d", arr[i]);
	}
	puts("");
	printf("sizeof(arr) = %ld\n", sizeof(arr));

#endif

#if 0
	typedef int *Parr_t[10];
	Parr_t parr;
	printf("sizeof(parr) = %d\n", sizeof(parr));

#endif

#if 1
	typedef int (*Pfunc_t)(int);
	Pfunc_t pfunc;
	pfunc = func;

	printf("%d\n", pfunc(10));
	typedef int (*PfuncArr_t[3])(int);
	PfuncArr_t pfuncarr = {func};
	printf("%d\n", pfuncarr[0](20));
	
#endif

	return 0;
}
