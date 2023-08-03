#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2
#define M N+2
#define NUM (M+N)*M

#define CC  3.14

#define MIN(a,b)  a+b 

int main(int argc, const char *argv[])
{
	printf("%d\n", NUM);
	
	printf("%f\n", CC);

	printf("%d\n", MIN(2,3) );

	return 0;
}
