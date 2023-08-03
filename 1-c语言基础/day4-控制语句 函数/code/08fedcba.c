#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	for(int i=0; i<6; i++)
	{
		//先打印下划线
		for(int j=0; j<i ; j++)
		{
			//printf("_");
			putchar('_');
		}

		//再打印字母
		for(int j=0; j<=i ; j++)
		{
			//printf("%c", 'F'-j);
			putchar('F'-j);
		}

		//printf("\n");
		putchar('\n');
	}


	return 0;
}
