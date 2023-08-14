#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("please input char\n");
	char ret = fgetc(stdin);
	printf("ret = %c --->%d",ret,ret);

	return 0;
}
