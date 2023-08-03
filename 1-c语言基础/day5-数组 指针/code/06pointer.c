#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//1. 指向整型变量的指针
	int a = 10;
	int *p = &a;

	printf("%d\n", *p);
	printf("%p %p\n", &a, p);

	//2.指向整型数组的指针
	int b[10] = {1,2,3,4,5,6,7};
	int *q = b;

	printf("%d\n", *q );
	printf("%d\n", *(q+1) );
	printf("%d\n", *(q+2) );

	printf("%p\n", q );
	printf("%p\n", (q+1) );
	printf("%p\n", (q+2) );


	printf("--------------------------------------\n");

	//3. 指向字符数组的指针
	char buf[10] = "hello";

	char *k = buf;

	printf("%c\n", *k );
	printf("%c\n", *(k+1) );
	printf("%c\n", *(k+2) );

	printf("%p\n", k );
	printf("%p\n", (k+1) );
	printf("%p\n", (k+2) );
	

	printf("%ld\n", sizeof(p));
	printf("%ld\n", sizeof(q));
	printf("%ld\n", sizeof(k));


	return 0;
}
