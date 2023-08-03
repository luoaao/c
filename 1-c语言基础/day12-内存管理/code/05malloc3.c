#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int *p = (int *)malloc(5*sizeof(int));

#if 0
	int i;
	for(i=0; i<5; i++)
	{
		scanf("%d", p+i);
	}

	for(i=0; i<5; i++)
	{
		printf("%d ", *(p+i));
	}

	puts("");

#endif

	int i;
	for(i=0; i<5; i++)
	{
		scanf("%d", &p[i]);
	}

	for(i=0; i<5; i++)
	{
		printf("%d ", p[i]);
	}

	puts("");

	return 0;
}
