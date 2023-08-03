#include "fun.h"

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

