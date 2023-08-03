#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	double a = 2, b = 1,sum = 0,t;
	int i;
	for(i = 0; i < 20; i++ ){
		sum += a/b;
		t = a;
		a = a+b;
		b = t;
	}
	printf("%f\n", sum);
	return 0;
}
