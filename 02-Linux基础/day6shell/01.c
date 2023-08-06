#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dele(char *str)
{
	char *q = str;
	char *p = str;
	while(*q){
		if(*q != ' '){
			*p = *q;
			p++;
		}
		q++;
	}
	*p = '\0';
	puts(str);
}
int main(int argc, const char *argv[])
{
	char a[100];
	fgets(a,100,stdin);
	a[strlen(a)-1] = '\0';
	puts(a);
	dele(a);
	puts(a);
	return 0;
}


