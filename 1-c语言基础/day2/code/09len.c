#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int len = sizeof("helloworld");
	printf("%d\n", len);

	printf("%ld\n", sizeof("helloworld")); //计算字符串占内存的空间大小

	printf("%ld\n", strlen("helloworld")); //计算字符串的真实长度

	return 0;
}
