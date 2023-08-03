#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	for(int i=1; i<=9 ; i++) //行数
	{
		for(int j=1; j<=i ; j++) //列数
		{
			printf("%d*%d=%-2d ", j,i,j*i);
		}
		
		printf("\n");
	}

	return 0;
}
