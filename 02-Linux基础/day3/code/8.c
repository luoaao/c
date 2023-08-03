#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dele(char *p)
{
	int len = strlen(p), i,j;
	for(i = 0; i<len; i++){
		if(p[i] == ' '){
			for(j=i; j<len-1;j++){
				p[j] =p[j+1]; 
			}
			i--;
			len-=1;
		}
	}
p[len] = '\0';
}
int main(int argc, const char *argv[])
{
	char a[100];
	fgets(a,100,stdin);
	a[strlen(a)-1] = '\0';
	printf(" qian is %s\n", a);
	dele(a);
	printf(" hou is %s\n", a);
	return 0;
}
