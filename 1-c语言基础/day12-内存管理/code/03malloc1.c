#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//申请了一个int类型的空间，4bytes
	int *p = (int *)malloc(sizeof(int));

	*p = 100;

	printf("%d\n", *p);


	return 0;
}
