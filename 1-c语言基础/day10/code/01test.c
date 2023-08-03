#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 100;

	int *p = &a;

	printf("&a = %p  p = %p  &p= %p\n", &a, p, &p);

	return 0;
}
