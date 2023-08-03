#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入一个成绩: ");
	int score;
	scanf("%d", &score);

	//百分制
	if(score < 0 || score > 100)
	{
		printf("输入错误!\n");
		return -1; //异常结束程序
	}
	else if( score >= 90 )
		printf("A\n");
	else if( score >= 80 )
		printf("B\n");
	else if( score >= 70 )
		printf("C\n");
	else if( score >= 60 )
		printf("D\n");
	else 
		printf("E\n");

	return 0; //正常结束程序
}
