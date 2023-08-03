#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入一个大于0小于999的数字: ");
	int m;
	scanf("%d", &m);

	if(m < 0 || m > 999)
	{
		printf("输入错误!\n");
		return -1;
	}
	else{
		printf("百位: %d\n", m/100);
		printf("十位: %d\n", m/10%10);
		printf("个位: %d\n", m%10);
	}

	return 0;
}
