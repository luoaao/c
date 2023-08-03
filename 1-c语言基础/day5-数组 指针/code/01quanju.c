#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a = 100;
int b = 200;
int c = 300;

void fun(int a, int b)
{
	//printf("%d\n", a+b);
	printf("fun:%d\n",a );
	printf("fun:%d\n",b );
	printf("fun:%d\n",c );
}

void fun1(void)
{
	printf("fun1:%d\n",a );
	printf("fun1:%d\n",b );
	printf("fun1:%d\n",c );
}

int main(int argc, const char *argv[])
{
	fun(1, 2);	

	fun1();

	printf("main:%d\n",a );
	printf("main:%d\n",b );
	printf("main:%d\n",c );

	return 0;
}

