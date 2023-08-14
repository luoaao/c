#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int ret = fputc(65,stdout);
	fputc('\n',stdout);
	printf("ret = %d\n",ret);
	return 0;
}
