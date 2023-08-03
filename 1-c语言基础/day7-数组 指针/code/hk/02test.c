#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[10] = {0};

int main(int argc, const char *argv[])
{

	for(int i = 0; i<10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	return 0;
}
