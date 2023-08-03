#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int arr[] = {6,7,8,9,10};

	int *ptr;
	ptr = arr;

	*(ptr+2) +=2;

	printf("%d %d\n", *ptr, *(ptr+2));

	return 0;
}
