#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[5] = {1,2,3,4,5};

	printf("请输入要移动的位数: ");
	int m;
	scanf("%d", &m);

	m = m%5;  //优化一下

	int i,j,temp;
	for(i=0; i<m; i++)
	{
		//循环一次的过程
		temp = a[4];

		for(j=4; j>0; j--)
		{
			a[j] = a[j-1];
		}

		a[0] = temp;
	}

	for(i=0;i<5;i++)
	{
		printf("%d ", a[i]);
	}
	
	puts("");

	return 0;
}
