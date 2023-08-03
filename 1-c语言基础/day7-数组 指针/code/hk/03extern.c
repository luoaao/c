#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 100;

//2.函数返回值
int fun(void)
{
	return i;
}

int main(int argc, const char *argv[])
{

	//1.指针
	int *p = &i; //放在局部变量上方
	
	int i = 10;

	{
		//3.extern
		extern  int i;

		printf("extern i = %d\n", i);
	}

	printf("i=%d *p=%d\n", i, *p);

	printf("%d\n", fun());

	return 0;
}
