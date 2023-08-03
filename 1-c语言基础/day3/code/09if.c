#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入你的年龄: ");

	int age;

	scanf("%d", &age);

	if(age < 0 || age > 120)
	{
		printf("年龄输入错误!\n");
	}
	else if(age < 18)
	{
		printf("未成年禁止入内!\n");
	}
	else{  //另外的情况 >= 18
		printf("欢迎光临!\n");
	}

	return 0;
}
