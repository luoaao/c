#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	double a=2, b=1;
	double num = 0, t;
	for(int i = 0; i<20; i++){
		num +=a/b;
		t = a;
		 a = a+b;
		 b = t;
	}
	printf("%f\n", num);
	return 0;
}
