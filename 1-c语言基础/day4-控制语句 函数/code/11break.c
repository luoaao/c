#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	for(int i=0; i<9; i++)
	{
		int k = 0;
		while(k<9)
		{
			if(k>i)
			{
				break;
			}
			printf(" *");
			k++;
		}

		printf("\n"); //putchar('\n');  puts(""); 换行
	}

	return 0;
}
