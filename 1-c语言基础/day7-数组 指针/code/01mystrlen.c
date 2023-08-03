#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(const char *p)
{
	int len = 0;
	while(*p)
	{
		len++;
		p++;
	}

	return len;
}

int main(int argc, const char *argv[])
{
	char buf[100] = "hello world";

	int len = mystrlen(buf);

	printf("%d\n", len);

	return 0;
}
