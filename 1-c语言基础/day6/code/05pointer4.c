#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	int *p = a;


	for(int i =0; i<10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	for(int i =0; i<10; i++)
	{
		printf("%d ", *(p+i));
	}

	puts("");

	for(int i =0; i<10; i++)
	{
		printf("%d ", *(a+i));
	}

	puts("");


	//   a++;  //数组名a是地址常量，所以不能自加或者自减

	//  a = 10;  //不能做左值  赋值的左边不能是常量

	//数组名能做的事情，指针可以做
	//指针能做的事情，数组名不一定能做


	return 0;
}
