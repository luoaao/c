#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	for(int i=0; i<18; i++)
	{
		for(int j=0; j<9; j++)
		{
			printf(" *");
		}
		
		int k = 0;
		while(k<9)
		{
			printf(" *");
			k++;
		}

		printf("\n"); //putchar('\n');  puts(""); 换行
	}

	return 0;
}
