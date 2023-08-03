#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 100;
	printf("%d\n", a);

	printf("%o\n", 0141);

	printf("%c  %d  %#x\n", 0141, 0141, 0141);

	printf("%u\n", 200);

	printf("%#x\n", 0x1e);

	printf("%c\n", 'a');

	printf("%s\n", "hello");

	printf("%f\n", 3.14);

	printf("%e\n", 3.14e2);

	printf("%p\n", &a);

	return 0;
}
