#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入一个数字: ");
	int m;
	scanf("%d", &m);

	switch(m) //表达式：整型、字符型、枚举
	{
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;

		default: //相当于else：另外的情况
			printf("输入错误!\n");
			break;
	}

	return 0;
}
