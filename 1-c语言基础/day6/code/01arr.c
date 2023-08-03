#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {0};

	int i;
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");


	a[6] = 60;
	a[7] = 70;


	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	return 0;
}
