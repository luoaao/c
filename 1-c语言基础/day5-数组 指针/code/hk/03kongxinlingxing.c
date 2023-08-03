#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	for(int i=0; i<11; i++)
	{
		for(int j=0; j<11; j++)
		{
			if(i ==j+5 || i==j-5 || i==-j+15 || i==-j+5 )
			{
				printf("*");
			}
			else{
				putchar(' ');
			}
		}
		
		putchar('\n'); //printf("\n"); puts("");
	}

	return 0;
}
