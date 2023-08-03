#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//无  没有返回值也没有参数
void fun(void)
{
	printf("xxx\n");
}

//无符号的指针类型
void *fun2(void *arg)
{
	//printf("%d\n", *arg);

	//printf("arg = %d\n",  *(int *)arg );
	
	printf("fun2: %s\n", (char *)arg);

	return arg;
}

int main(int argc, const char *argv[])
{
	fun();
	
	//int n = 100;
	//
	//fun2( (void *)&n );

	char buf[100] = "hello";

	//printf("main: %s\n",  (char *)fun2( (void *)buf) );

	char *p = fun2((void *)buf);

	printf("main: %s\n", p);

	return 0;
}
