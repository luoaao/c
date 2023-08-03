#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct People{
	char name[20];
	int nl;
	short a;
}st_p;

int main(int argc, const char *argv[])
{
	st_p a;
	printf("%d",sizeof(a));
	
	return 0;
}
