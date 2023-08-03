#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//0. 整型的一维数组初始化
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	int b[10] = {1,2,3,4,5};

	int c[10] = {0};

	// 1. 数组名+下标 : 访问数组的元素
	c[0] = 10;
	c[1] = 20;
	c[2] = 30;
	c[3] = 40;
	c[4] = 50;

	printf("%d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4]);

	//2. 通过for来遍历数组，赋值或者打印
	for(int i = 0; i<10; i++)
	{
		c[i] = i+1;
	}

	for(int i = 0; i<10; i++)
	{
		printf("%d ", c[i]);
	}

	puts("");

	int i;
	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");


	for(i=0; i<10; i++)
	{
		printf("%d ", b[i]);
	}

	puts("");


	return 0;
}
