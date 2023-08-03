#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	if(argc!=3)
	{
		printf("%s string1 string2\n", argv[0]);
		return -1;
	}

	printf("argc=%d\n", argc);

	printf("%s %s %s\n", argv[0], argv[1], argv[2]);

	return 0;
}
