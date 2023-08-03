#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//重命名 把int重命名成int
typedef int data_t;

typedef int (*HSZZ)(int,int);


int Max(int a, int b)
{
	return (a > b)?a:b;
}

int main(int argc, const char *argv[])
{

	//函数指针
	//形式：返回值的数据类型 (*p)(函数参数的数据类型)
	//函数指针的数据类型
	
	//int (*p)(int,int) = Max; //Max就是函数入口地址	
	HSZZ p = Max;

//	printf( "%d\n", Max(1,2));

//	printf( "%d\n", p(1,2));

	int a, b ,c ,d;

	scanf("%d %d %d", &a, &b, &c);

	d = p( p(a,b) , c);

	printf("%d\n", d);

	return 0;
}
