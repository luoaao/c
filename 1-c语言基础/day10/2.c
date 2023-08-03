#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 0, b = 1020;
	while(b>0){
		b = b/2-1;
		a++;
		printf("%d  %d\n ", a, b);
	}
	printf("%dday\n", a);
	return 0;
}
