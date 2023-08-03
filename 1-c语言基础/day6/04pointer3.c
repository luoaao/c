#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	char buf[10] = "hello";

	int *p = a;  //数组名就是数组的首地址
	char *q = buf;

		
	printf("%d\n", *p);
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));
	printf("%d\n", *(p+3));
	printf("%d\n", *(p+4));
	printf("%d\n", *(p+5));


	printf("%c\n", *q);
	printf("%c\n", *(q+1));
	printf("%c\n", *(q+2));
	printf("%c\n", *(q+3));
	printf("%c\n", *(q+4));
	printf("%c\n", *(q+5));


	printf("指针的运算就是地址的运算!\n");

	printf("%p\n", p);
	printf("%p\n", (p+1));
	printf("%p\n", (p+2));
	printf("%p\n", (p+3));
	printf("%p\n", (p+4));
	printf("%p\n", (p+5));

	printf("--------------------------\n");

	printf("%p\n", q);
	printf("%p\n", (q+1));
	printf("%p\n", (q+2));
	printf("%p\n", (q+3));
	printf("%p\n", (q+4));
	printf("%p\n", (q+5));

	return 0;
}
