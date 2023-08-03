#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *p = (char *)malloc(100*sizeof(char));

	//p = "hello"; //字符串常量，不能被修改

	strcpy(p,"hello world");

	printf("%s\n", p);

	free(p);  //p会变成野指针
	p = NULL; 

	//free(p+50); //1.不能释放申请空间的一部分
	//free(NULL); //2.无意义
	//free(p); //3.不能重复释放
	//4.堆空间被释放后，不能再使用

	return 0;
}
