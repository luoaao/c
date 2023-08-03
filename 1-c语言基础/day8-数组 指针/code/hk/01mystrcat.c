#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrcat(char *p, const char *q)
{
	//把buf的字符串遍历末尾
	while(*p)
	{
		p++;
	}

	while(*q)
	{
		*p++ = *q++;
	}

	*p = '\0';
}

int main(int argc, const char *argv[])
{
	
	char buf[100] = "hello ";

	char str[100] = "world";

	mystrcat(buf, str);

	puts(buf);

	return 0;
}
