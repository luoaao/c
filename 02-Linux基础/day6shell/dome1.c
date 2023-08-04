#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int var;
int main(int argc, const char *argv[])
{
	var = 100;
	printf("%d\n",var);
	return 0;
}
