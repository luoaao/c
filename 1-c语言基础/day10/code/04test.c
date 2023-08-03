#include<stdio.h>
void fun(int(*p1)[3], int(*p2)[3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			*(p1[j] + i) = *(p2[i] + j);
		}
	}
}
 
int main()
{
	int i, j;
	int p1[3][3] = { 0 };
	int p2[3][3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &p2[i][j]);
		}
	}
	fun(p1, p2);
	printf("转至后的矩阵\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", *(p1[i] + j));
		}
		printf("\n");
	}
	return 0;
}
