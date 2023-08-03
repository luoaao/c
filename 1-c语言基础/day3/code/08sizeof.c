#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	printf("int--%ld\n", sizeof(int));
	printf("short--%ld\n", sizeof(short));
	printf("long--%ld\n", sizeof(long));
	printf("char--%ld\n", sizeof(char));
	printf("float--%ld\n", sizeof(float));
	printf("double--%ld\n", sizeof(double));
	printf("longlong--%ld\n", sizeof(long long));
	printf("long double--%ld\n", sizeof(long double));
	printf("bool--%ld\n", sizeof(bool));



	return 0;
}
