#include "fun.h"

//函数1  void 无  没有参数 也没有返回值
void fun1(void)
{
	printf("hello world\n");
}

void fun2(int x, int y) //传参的时候，只需要保持数据类型一致即可
{
	printf("%d\n", x+y);
}

int fun3(int a, int b, int c)
{
	return a-b-c;
}

void fun4(int *x, int *y)
{
	//交换
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;

	printf("fun4 : %d %d\n", *x, *y);
}

void fun5(int p, int q)
{
	p ^= q;
	q ^= p;
	p ^= q;

	printf("fun5 : %d %d\n", p ,q);
}

