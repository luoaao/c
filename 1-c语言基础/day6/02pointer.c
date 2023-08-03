#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 120;

	int *p = &a; //* 说明p是指针变量（简称指针）

	printf("%d\n", *p); //* 指针运算符（取出地址中的值）

	printf("%p %p %p\n", &a, p, &p);


	char ch = 'b';

	char *q = &ch;

	printf("%c\n", *q); //* 指针运算符（取出地址中的值）

	printf("%p %p %p\n", &ch, q, &q);


	return 0;
}
