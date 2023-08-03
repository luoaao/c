#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a=0, b = 1;  
	(a++ && b++)? a++:++b;         
	printf("%d %d\n", a, b);	
	
	return 0;
}
