#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//1. 字符型的一维数组
	char buf1[10] = {'h', 'e','l', 'l', 'o', '\0'};

	char buf2[10] = {"hello"};

	char buf[10] = "hello";


	//2. 数组名+下标
	printf("%c\n", buf[0]); //'h'
	printf("%c\n", buf[1]); //'e'
	printf("%c\n", buf[2]); //'l'
	printf("%c\n", buf[3]); //'l'
	printf("%c\n", buf[4]); //'o'
	printf("%c\n", buf[5]); //不能显示出来 '\0' NULL
	printf("%c\n", buf[9]); //'\0'
	
	buf[0] = 'w';
	buf[1] = 'o';
	buf[2] = 'r';
	buf[3] = 'l';
	buf[4] = 'd';

	//3. 遍历字符数组 
	
	for(int i = 0; i<10; i++)
	{
		printf("%c", buf[i]);
	}
	puts("");

	printf("buf = %s\n", buf); //数组名就是数组的首地址

	return 0;
}
