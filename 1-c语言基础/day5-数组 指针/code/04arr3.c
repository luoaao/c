#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[10] = "hello";

	//1. strlen 求字符串的真实长度
	printf("%ld\n", strlen(buf));  //5bytes

	printf("%ld\n", sizeof(buf));  //求数组占内存的大小 10*1=10bytes

	//2. strcpy 复制
	strcpy(buf, "world"); //用world把hello给替换掉

	puts(buf); //printf("%s\n", buf); 

	strcpy(buf, "xxx");

	puts(buf); //xxx

	//3. strcat 拼接
	
	strcat(buf, "yyy"); //在buf末尾拼接上yyy

	puts(buf);

	//4. strcmp 比较大小 --  设计协议 字符串是否相等
	
	int n = strcmp(buf, "zxxyyy");

	//printf("%d\n", n); //如果两个字符串相同，返回值为0

	//printf("%d\n", n); //如果  >   (比较的是ascii值)， 返回值为正数
	
	printf("%d\n", n);   //如果  <   (比较的是ascii值)， 返回值为负数


	//strstr 在字符串中寻找子字符串
	//strtok 分离字符串
	

	return 0;
}
