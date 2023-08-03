#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 1;
	for(a;a<=100; a++){
		if(a%2==0)
			printf("%d ",a);
	}
	puts("");
	return 0;
}
