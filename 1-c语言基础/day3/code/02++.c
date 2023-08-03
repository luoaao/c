#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 10, b = 20;

	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);

	printf("%d\n", a++);
	printf("%d\n", ++a);
	
	printf("%d\n", b--);
	printf("%d\n", --b);

	return 0;
}
