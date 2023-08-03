#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char a;
	char b;

	a = 'A';
	b = 'B';

	char c = a+32;

	char d = b+32;

	char e = '5' + 3;

	int k = '5' - '0';

	printf("a = %c b = %c\n", a, b);

	printf("c = %c d = %c\n", c, d);

	printf("e = %c\n", e);

	printf("k = %d\n", k);

	return 0;
}
