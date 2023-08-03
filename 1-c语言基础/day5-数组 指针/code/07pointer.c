#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 0x11223344;

	int *p = &a;

	short *q = (short *)&a;

	char *k = (char *)&a;

	//指针是粗细的
	printf("%#x\n", *p);
	printf("%#x\n", *q);
	printf("%#x\n", *k);

	return 0;
}
