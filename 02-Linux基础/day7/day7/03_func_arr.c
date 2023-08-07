/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：03_func_arr.c
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

int func(int p[], int size)
{
	int i = 0, sum = 0;
	for(; i < size; i++){
		sum += p[i];
	}
	printf("sizepf(p) = %ld\n", sizeof(p));

	return sum;
}

int main()
{

	int arr[5] = {1, 2, 3, 4, 5};

	int ret = func(arr, 5);
	printf("ret = %d\n", ret);

	return 0;
}
