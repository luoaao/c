#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inserts2(char *str1,char *str2, int n)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	char *p = str1;
	char *q = str2;
	while(*p){
		p++;
	}
	int i;
	for(i=len1-n; i>=0; i--){
		*(p+len2) = *p;
		*p--;
	}
	p++;
	for(i=0; i<len2; i++){
		*p++ = *q++;
	}
	puts(str1);

}

int main(int argc, const char *argv[])
{
	char s1[64] = {"hello word"};
	char s2[3] = {"ni"};
	int n = 3;

	inserts2(s1,s2,n);
	return 0;
}
