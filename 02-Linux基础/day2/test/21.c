#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
	char c;
	int count = 0;
	do{
		scanf("%c",&c);
			count++;
	}while(c!='\n');
	printf("%d\n",count);
	return 0;
}
