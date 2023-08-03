#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *p = (char *)malloc(sizeof(char));

	*p = 'a';

	printf("%c\n", *p);

	return 0;
}
