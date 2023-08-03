#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入一个字符串: ");
	char buf[100] = {0};
	scanf("%s", buf);

	getchar(); //吃掉多余的字符

	printf("请输入要删除的字符: ");
	char ch;
	scanf("%c", &ch);


	char *p1 = buf;
	char *p2 = p1;
	
	//用指针遍历字符串
	while(*p1)
	{
		if(*p1 != ch)
		{
			*p2++ = *p1;
		}

		p1++;
	}

	*p2 = '\0';

	puts(buf);  //printf("%s\n", buf);

	return 0;
}
