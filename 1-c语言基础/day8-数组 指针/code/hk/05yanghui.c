#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10][10];

	int i,j;

	for(i=0; i<10; i++)
	{
		
		a[i][0] = 1;

		a[i][i] = 1;

		for(j=1; j<i ;j++)
		{
			if(i>=2)
			{
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}

	}

	for(i=0;i<10;i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%-4d", a[i][j]);
		}
		puts("");
	}


	return 0;
}
