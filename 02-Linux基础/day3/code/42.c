#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void huiwen(char *p)
{
	int len = strlen(p);
	int start = 0 , end = len -1;

	while( start<end){
		if(tolower(p[start]) != tolower(p[end]))
		{
			printf("no\n ");
			return;
		}
		start++;
		end--;
	}
	printf("is hui \n");
}

int main(int argc, const char *argv[])
{
	char a[100];
	scanf("%s", a);
	huiwen(a);
	return 0;
}
