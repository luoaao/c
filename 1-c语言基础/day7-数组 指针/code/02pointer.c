#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[100] = "hello world";

	char *p = buf;

	//遍历到字符串的末尾
	while(*p)
	{
		p++;
	}

	printf("%c\n", *p);
	printf("%c\n", *(p-1));
	printf("%c\n", *(p-2));

	printf("%p\n", p);
	printf("%p\n", (p-1));
	printf("%p\n", (p-2));

	return 0;
}
