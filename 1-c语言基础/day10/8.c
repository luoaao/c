#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a, b, c, x, sum;
	for (x = 1; x <= 5; x++)
	{
		if (10605 % ( 28 - 5 * x) == 0)
		{
			sum = 10605 / ( 28 - 5 * x);
			a = 2 * sum / 10;
			b = x * sum / 7;
			c = 303;
			printf ("total is %d\n", sum);
			printf ("A: %d\n", a);
			printf ("B: %d\n", b);
			printf ("C: %d\n", c);
		}
	}

	return 0;
} 
