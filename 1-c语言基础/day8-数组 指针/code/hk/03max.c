#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[3][4] = {1,5,3,96,45,32,23,12,44,43,88,12};

	//找到最大的元素
	int max = a[0][0];
	int m,n, i, j;

	//遍历二维数组
	for(i=0; i<3; i++)
	{
		for(j=0; j<4;j++)
		{
			if(a[i][j] > max)
			{
				max= a[i][j];
				m = i;
				n = j;
			}
		}
	}

	printf("max = %d  i=%d j=%d\n", max, m, n);

	return 0;
}
