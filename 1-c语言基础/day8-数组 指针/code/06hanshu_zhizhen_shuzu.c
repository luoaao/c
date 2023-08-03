#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b)
{
	return a+b;	
}

int sub(int a, int b)
{
	return a-b;	
}

int main(int argc, const char *argv[])
{
	int (*p1)(int,int) = add;
	int (*p2)(int,int) = sub;

	int (*p[2])(int,int);  //函数指针数组

	p[0] = p1;
	p[1] = p2;

	printf("%d %d\n", p[0](1,2), p[1](1,2));

	return 0;
}
