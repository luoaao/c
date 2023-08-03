#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//打印1-100的偶数

	for(int i=1; i<=100; i++)
	{
		//打印奇数的时候，跳过
		if(i % 2 == 1)
		{
			continue; //跳出本次循环
		}

		printf("%d ", i);
	}

	printf("\n");

	return 0;
}
