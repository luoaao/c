#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//自己写一个strcpy

#if 0
void mystrcpy(char *dest, const char *src)
{
	while(*dest++ = *src++);
	*dest = '\0';
}
#endif

void mystrcpy(char *p, char *q)
{
	while(*q)
	{
		*p++ = *q;

		q++;
	}

	*p = '\0';
}

#if 0
int main(void)
{
	char buf[100] = {0};

	mystrcpy(buf,"hello");

	puts(buf);

	return 0;
}
#endif

#if 1
int main(int argc, const char *argv[])
{
	printf("请输入一个字符串: ");
	char buf[100] = {0};
	scanf("%s", buf);

	printf("请输入要删除的字符串: ");
	char str[100] = {0};
	scanf("%s", str);

	int len = strlen(str); //要删除的字符串的长度

	//循环
	while(1)
	{
		//在字符串中寻找子字符串，
		//成功找到，那么返回子字符串的地址
		//失败，返回NULL
		char *p = strstr(buf, str);	
		if( p == NULL)
		{
			break;
		}

		mystrcpy(p, p+len);
	}

	puts(buf);

	return 0;
}
#endif
