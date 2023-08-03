#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	
	int a = 5;

	float b = 3.14;

	float c = a+b; //隐式转换：小类型-->大类型


	printf("%.2f\n", c);


	
	int m = -1;

	if(strlen("hello") > m) //隐式转换：有符号的-->无符号的
	{
		printf("len > m\n");
	}
	else{
		printf("len < m\n");
	}

	return 0;
}
