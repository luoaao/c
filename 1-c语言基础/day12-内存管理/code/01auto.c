#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int m; //6.外部存储类型
extern int n;

extern void xxx(void);

int i = 100; //3.全局非static静态存储类型

void fun1(void)
{
	printf("fun1: i=%d\n", i); //100
	printf("m = %d n = %d\n", m, n);
}

int fun2(int i)
{
	return i; //100
}

void fun3(void)
{
	int i = 1;
	printf("fun3: i=%d\n",i); //同名的情况，局部变量优先
}

void fun4(void)
{
	//局部变量的生命周期:从定义开始，到代码块结束
	int a = 1;
	//4. 用static修饰的局部变量的生命周期：从定义开始，到程序结束
	//作用就是延长变量b的生命周期
	static int b = 1;

	a++;
	b++;

	printf("%d %d\n", a, b);
}



int main(int argc, const char *argv[])
{
	auto int a = 10;  //1. 自动存储类型

	int b = 20; //auto一般都会省略

	register int c; //2.寄存器存储类型
	//寄存器是有限的，只能是经常使用的数据用这种

	printf("main: i=%d\n", i); //100

	fun1();

	printf("fun2: %d\n", fun2(i));

	fun3();


	fun4();
	fun4();
	fun4();
	fun4();


	printf("m = %d n = %d\n", m, n);

	xxx();

	return 0;
}
