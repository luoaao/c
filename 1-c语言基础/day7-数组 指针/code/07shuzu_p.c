#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {1,2,3,4,5};

	int *p = a;

	//访问4
	printf("%d\n", a[3]);

	printf("%d\n", *(p+3));
	
	printf("%d\n", *(a+3)); 

	//数组名不能作左值，不能自加或者自减


	int b[3][4] = {1,2,3,4,
				   5,6,7,8,
				   9,10,11,12};

	//int *q = b; //error 因为b是数组指针（行指针）
	//访问7
	printf("%d\n",b[1][2]);

	//这里的*是解引用，把行指针降为普通指针
	printf("%d\n", (*(b+1))[2]);

	//这里的*是指针运算符，取出地址中的值
	printf("%d\n", *(b[1]+2));

	//里面的*是解引用，把行指针降为普通指针
	//外面的*是指针运算符，取出地址中的值
	printf("%d\n",  *(*(b+1)+2) );

	//练习：通过解引用的方式打印二维数组
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ", *(*(b+i)+j));
		}
	}

	puts("");

#if 1
	printf("%d\n", (*(b+0))[0]);

	printf("%d\n", *(b[0]+0));

	printf("%d\n", *(*(b+0)+0) );
#endif
	
	return 0;
}
