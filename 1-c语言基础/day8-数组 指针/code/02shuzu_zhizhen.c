#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[3][4] = {1,2,3,4,
				   5,6,7,8,
				   9,10,11,12};

	//1.数组名+下标
	printf("%d\n", a[1][1]); //6

	//2.使用普通指针来访问
	int *p = a[0];

	printf("%d\n", *p); //1
	printf("%d\n", *(p+1)); //2
	printf("%d\n", *(p+2)); //3
	printf("%d\n", *(p+3)); //4
	printf("%d\n", *(p+4)); //5
	printf("%d\n", *(p+11)); //12

	int *q = a[1];

	printf("%d\n", *q); //5
	printf("%d\n", *(q+1)); //6
	printf("%d\n", *(q+2)); //7
	printf("%d\n", *(q+3)); //8
	
	printf("%d\n", *(q-1)); //4
	printf("%d\n", *(q-2)); //3


	//3.用数组指针（行指针）来访问  ,  (*p)[列数]
	//数组指针：本质上是指针
	//	int (*p)[4] = a;
	int (*k)[4] = a;

	//p和a就是指针和地址常量的关系: a能够做的事情，p都能做到

	printf("%d\n",  *(*(k+2)+3)  );

	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",  *(*(k+i)+j)  );
		}
	}

	puts("");

	return 0;
}
