#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revert(char *p,char*q)
{
	int len = strlen(p);
	int i = 0;
	for(;i<len;i++){
		q[i] = p[len-i];
	}
}

int main(int argc, const char *argv[])
{
	char buf[32] = "hello word!";
	char new[32] = {0};

	revert(buf,new);
	puts(new);
	return 0;
}
