#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *st = "how are you";

#if 0	
	char a[11], *p;

	strcpy(p=a+1, &st[4]);

	printf("%s\n", p);

	printf("%s\n", a);
#endif

	char a[], *p;

	strcpy(p=&a[1], st+2);

	printf("%s\n", p);

	printf("%s\n", a);

	return 0;
}
