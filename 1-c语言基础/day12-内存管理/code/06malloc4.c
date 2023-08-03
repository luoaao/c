#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *p = (char *)malloc(100*sizeof(char));

	//p = "hello"; //字符串常量，不能被修改

	strcpy(p,"hello world");

	printf("%s\n", p);

	return 0;
}
