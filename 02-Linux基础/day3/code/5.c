#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nums(char *p)
{
	int count = 1,index = 0;
	while(*p){
		if(*p == ' ')
			count++;
		p++;
	}
	return count;
}

int main(int argc, const char *argv[])
{
	char a[100];
	fgets(a,100,stdin);
	a[strlen(a)-1]= '\0';
	printf("%d\n",nums(a));
	return 0;
}
