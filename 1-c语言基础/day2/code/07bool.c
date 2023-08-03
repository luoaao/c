#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	bool a, b, c, d, e;

	a = 5;
	b = -5;  //非零即真
	c = true;
	d = false;
	e = 0;

	printf("%d %d %d %d %d\n", a, b ,c ,d, e);

	return 0;
}
