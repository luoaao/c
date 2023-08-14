#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int ret = fputs("hellow word",stdout);
	printf("%d\n",ret);
	return 0;
}
