#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[100] = "hello world";

	char *p1 = &buf[1];
	char *p2 = &buf[9];

	printf("%ld\n", p2-p1);

	return 0;
}
