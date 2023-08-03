#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char buf[5][10] = {"apple","orange","bananax","pear","bergamot"};

	//指针数组：本质上是一个数组，装的是地址
	//char *p[行数]
	char *p[5] = {buf[0],buf[1],buf[2],buf[3], buf[4]};

	//给指针数组进行排序,冒泡排序
	
	int i,j;
	char *temp;
	for(i=0; i<5; i++)
	{
		for(j=0; j<4-i;j++)
		{
			if( strlen(p[j]) > strlen(p[j+1]) )
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}

	//打印指针数组
	for(i=0;i<5;i++)
	{
		printf("%s ", p[i]); //数组名+下标
	}

	puts("");

	return 0;
}
