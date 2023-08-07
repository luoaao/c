/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：04_pfunc.c
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

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}
int testfunc(int x, int y, int (*pfunc)(int, int))
{

   return pfunc(x, y);
}

int main()
{
	int a = 10, b = 20;
	printf("%d\n", add(a, b)); // 30
	printf("%d\n", sub(a, b)); // -10

	int (*pfunc)(int, int) = add;
	printf("%d\n", pfunc(a, b)); // 30
	pfunc = sub;
	printf("%d\n", pfunc(a, b));//-10

	int (*parrfunc[3])(int, int) = {add, sub};
	printf("%d\n", parrfunc[0](100, 200));
	printf("%d\n", parrfunc[1](100, 200));
	
	printf("%d\n", testfunc(10, 20, add));

	return 0;
}
