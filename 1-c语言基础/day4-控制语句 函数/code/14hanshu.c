#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//如果自己写的函数在main后面，需要加函数声明

//函数声明
//在函数头中定义的参数---形参
void fun1(void);
void fun2(int x, int y); //传参的时候，只需要保持数据类型一致即可
int fun3(int a, int b, int c);
void fun4(int *x, int *y);
void fun5(int p, int q);

int main(int argc, const char *argv[])
{
	printf("111111111111\n");
	
	//函数调用: 函数名();
	fun1();

	printf("222222222222\n");

	//在函数调用中传递的参数---实参
	fun2(20, 13);

	int a = 30, b = 20;
	fun2(a, b);

	printf("%d\n",  fun3(20,10,3) );

	int m = fun3(100,30,20);
	printf("m=%d\n", m);


	//地址传递 : 能够改变实参的值
	int x = 100, y = 200;
	int p = 100, q = 200;

	fun4(&x, &y);
	fun5(p, q);

	printf("main: %d %d\n", x, y);
	printf("main: %d %d\n", p, q);

	return 0;
}

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

