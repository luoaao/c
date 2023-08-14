/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：sort.c
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

void selectSort(int *p, int size);
void insertSort(int *p, int size);
void BinInsertSort(int *p, int size);
void quickSort(int *p, int low, int high);

int main()
{
	int k[]={50, 36, 66, 76, 95, 12, 25, 36};
	int len = sizeof(k) / sizeof(int);

	//selectSort(k, len);
	//insertSort(k, len);
	//BinInsertSort(k, len);
	quickSort(k, 0, len-1);

	int i = 0;
	for(; i < len; i++){
		printf("%d ", k[i]);
	}
	puts("");
	
	return 0;
}
void selectSort(int *p, int size)
{
	int min;
	int i, j;

	for(i = 0; i < size-1; i++){//遍历到一个数就和后面的所有数比较，只需要取到倒数第二个数
		min = i;//假设i为最小值的下标
		for(j = i+1; j < size; j++){//表示下标为i后面的所以数据
			if(p[j] < p[min]){
				min = j; //找到比p[min]更小的数就只记录下标
			}
		}
		if(min != i){ //如果i不等于min说明下标为min的数后面还有更小的
			int t = p[min];
			p[min] = p[i];
			p[i] = t;
		}
	}
	
	return ;
}
void insertSort(int *p, int size)
{
	int i, key, j;
	for(i = 0; i < size; i++){
		key = p[i];
		j = i-1;
		while(j >= 0 && key < p[j]){
			p[j+1] = p[j];
			j--;
		}
		p[j+1] = key;
	}
}

void BinInsertSort(int *p, int size)
{
	int i = 0;
	int key;
	for(i = 0; i < size; i++){
		int low = 0;
		int high = i-1;
		key = p[i];
		while(low <= high){
			int mid = (low + high) / 2;

			if(key < p[mid]){
				high = mid-1;
			}else if(key > p[mid]){
				low = mid+1;
			}else{
				low = mid + 1;
			}
		}
		//low 就是要插入的位置
		
		int j;
		for(j = i-1; j >= low; j--){
			p[j+1] = p[j];
		}
		p[low] = key;
	}

}
void quickSort(int *p, int low, int high)
{
	int i = low, j = high;
	int key;
	if(low < high)//递归的结束条件
	{
		i = low;
		j = high;
		key = p[i];
		while(i < j){
			while(i < j && p[j] >= key){
				j--;
			}
			p[i] = p[j];

			while(i < j && p[i] <= key){
				i++;
			}
			p[j] = p[i];
		}
		p[i] = key;
		quickSort(p, low, i-1);
		quickSort(p, i+1, high);
	}

}
