#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 0x11223344;

	printf("%p\n", &a);

	int *p = &a;
	short *q = (short *)&a;
	char *k = (char *)&a;

	printf("%#x\n", *p);
	printf("%#x\n", *q);
	printf("%#x\n", *k);

	printf("%#x\n", *(p+0)); //0x11223344
	printf("%#x\n", *(q+1)); //0x1122
	printf("%#x\n", *(k+3)); //0x11

	return 0;
}
