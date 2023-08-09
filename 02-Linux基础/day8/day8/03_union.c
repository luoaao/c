/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：03_union.c
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

typedef union{
	int var1;
	char var2;
}U_t;

typedef union{
	struct{
		short var1;
		short var2;
	}V;
	
	int var3;
}U1_t;


int main()
{
	U_t tt;

	printf("%ld\n", sizeof(tt));
	tt.var1 = 10;

	printf("%d\n", tt.var2);

	printf("%ld\n", sizeof(U1_t));
	
	U1_t tt1;
	tt1.var3 = 0x11223344;
	
	printf("tt1.V.var1: %x tt1.V.var2: %x\n", tt1.V.var1, tt1.V.var2);

	return 0;
}
