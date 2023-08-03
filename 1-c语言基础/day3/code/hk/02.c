#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	float r = 0.3;

	int n = 10;

	float p = pow( 1+r, n);

	printf("p = %f\n", p);

	return 0;
}
