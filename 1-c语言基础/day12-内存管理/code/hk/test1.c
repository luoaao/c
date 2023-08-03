#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {1,2,3,4,5};

	int *p = a;

	printf("%d\n", *p);
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));

	printf("%p\n", p);
	printf("%p\n", (p+1));
	printf("%p\n", (p+2));

	printf("%p\n", p);
	
	return 0;
}
