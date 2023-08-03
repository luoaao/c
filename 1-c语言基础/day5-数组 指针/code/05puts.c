#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[100] = {0};

	//字符串的输入和输出函数
#if 0	
	gets(buf);
#endif

#if 1	
	fgets(buf, 100, stdin); //stdin:标准输入流(终端输入数据) 
	buf[strlen(buf)-1] = '\0';
#endif

#if 0	
	scanf("%s", buf);
	printf("%s\n", buf);
#endif
	puts(buf);

	//字符的输入和输出函数
	//getchar
	//putchar
	
	//通用的输入和输出函数
	//printf
	//scanf

	return 0;
}
