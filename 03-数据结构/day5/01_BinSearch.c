/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：01_BinSearch.c
*   创 建 者：JiangCX
*   创建日期：2023年08月15日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int binSearch(int *p, int len, int data)
{
	int low = 0;
	int high = len-1;
	int key = data;

	while(low <= high){
		int min = (low + high) / 2;
		if(key < p[min]){
			high = min-1;
		}else if(key > p[min]){
			low = min + 1;
		}else{
			return min;
		}
	}

	return -1;
	
}

int main()
{
	int arr[] = {3, 12, 18, 20, 32, 55, 60, 68, 80, 86, 90, 100};
	int len = sizeof(arr) / sizeof(int);

	int pos = binSearch(arr, len, 100);
	if(pos < 0){
		printf("no such the data:\n");
		return -1;
	}
	printf("pos = %d --> %d\n", pos, arr[pos]);

	return 0;
}
