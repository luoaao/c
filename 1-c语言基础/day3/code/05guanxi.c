#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 1, b =2;

	printf("%d\n", a<b?1:0); //1
	printf("%d\n", a>b?1:0); //0
	printf("%d\n", a<=b?1:0); //1
	printf("%d\n", a>=b?1:0); //0
	printf("%d\n", a==b?1:0); //0
	printf("%d\n", a!=b?1:0); //1
	
	return 0;
}
