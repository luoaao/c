#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int n;
	printf("请输入数组的长度: ");
	scanf("%d", &n);

	printf("n=%d\n", n);

	int a[n];  //不能初始化

	int i;
	//赋值
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	//打印
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	return 0;
}
