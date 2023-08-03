#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {2,8,6,12,8,23,1,6,56,777};

	//冒泡排序
	//先把最小的找出来排到最后
	//再把剩下的里面最小的找出来排到后面
	//。。。。。
	for(int i = 0; i<10; i++) //0~9
	{
		for(int j=0; j<9-i; j++)  //len-1-i
		{
			if(a[j] < a[j+1])
			{
				a[j] ^= a[j+1];
				a[j+1] ^= a[j];
				a[j] ^= a[j+1];
			}
		}
	}

	//打印数组
	for(int i=0; i< 10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	
	//逆序
	for(int i=0; i< 10/2; i++)
	{
		a[i] ^= a[9-i];
		a[9-i] ^= a[i];
		a[i] ^= a[9-i];
	}


	//打印数组
	for(int i=0; i< 10; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	return 0;
}
