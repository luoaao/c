#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int* intPtr;

int main(int argc, const char **argv)
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	intPtr p[2] = {&a[0], &a[1]};

	printf("%d %d\n", *p[0], *p[1]);

	printf("%s %s\n",argv[0], argv[1]);

	return 0;
}
