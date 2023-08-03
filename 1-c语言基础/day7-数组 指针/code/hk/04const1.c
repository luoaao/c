#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//const int i;

#if 1	
	const int i = 100;

	int *p = &i;

	printf("%d\n", i);

	*p = 200;

	printf("%d\n", i);
#endif
	return 0;
}
