#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	float a;
	float b;

	a = 3.14;
	b = 4.56;

	float c = 1.2, d = 2.4;

	float e = a+b+c+d;

	float f = 3.14+4.56+1.2+2.4;

	printf("a = %f\n", a);

	printf("b = %f c = %f d = %f e = %f\n", b, c, d, e);

	printf("f = %f\n", f);

	return 0;
}
