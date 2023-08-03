#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//1.完全初始化
	int a[3][3] = {1,2,3,4,5,6,7,8,9};

	//数组名+下标
	printf("%d\n", a[1][1]);  //5
	printf("%d\n", a[0][1]);  //2
	printf("%d\n", a[2][2]);  //9


	//2.部分初始化
	int b[3][4] = {{1,2,3},{4,5,6},{7,8}};

	printf("%d\n", b[1][1]);  //5
	printf("%d\n", b[0][1]);  //2
	printf("%d\n", b[2][1]);  //8
	printf("%d\n", b[2][2]);  //0

	//3.缺省初始化
	int c[][3] = {1,2,3,4,5,6,7,8,9}; 

	//这里只能省略行数

	//赋值
	int i, j;

	for(i = 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	//打印
	for(i = 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", a[i][j]);
		}
	}

	puts("");

	return 0;
}
