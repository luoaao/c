#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入一个字符串: ");
	char buf[100] = {0};
	scanf("%s", buf);

	//Ujack#ps123
	int i, position;
	for(i=0;  buf[i] != '\0'  ;i++)
	{
		if(buf[i] == '#')
		{
			position = i;
		}
	}

	//找到了#的下标position

	printf("用户名: ");

	for(i=1; i<position; i++)
	{
		printf("%c", buf[i]);
	}

	puts("");

	printf("密码: ");

	for(i=position+1;  buf[i]!='\0' ;i++)
	{
		printf("%c", buf[i]);	
	}

	puts("");

	return 0;
}
