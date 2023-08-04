#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	const int var = 10;
	int *p = (int *)&var;
	*p = 44;
	printf("%d\n",var);
	
	return 0;
}
