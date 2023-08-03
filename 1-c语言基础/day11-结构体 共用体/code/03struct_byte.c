#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct A{
	short b;
	char c;
	//double e;
	int a;
	char d[25];
	int *p;  //地址  8字节
	char *q;
};


int main(int argc, const char *argv[])
{
	struct A a;

	printf("%ld\n", sizeof(a));//结构体占内存的大小
	printf("%ld\n", sizeof(struct A));

	return 0;
}
