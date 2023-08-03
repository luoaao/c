#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun(int a, int b)
{
	return a+b;
}

int main(int argc, const char *argv[])
{
	int a = 2, b = 2, sum = 0;	

	sum = fun( fun((++a, ++b), ++b ), a++);

	printf("sum = %d\n", sum);

	return 0;
}
