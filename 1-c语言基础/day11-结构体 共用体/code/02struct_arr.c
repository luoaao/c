#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//美国大选
typedef struct Person{
	char name[30]; //候选人名字
	int number; //得票数
}houxuanren;

int main(int argc, const char *argv[])
{
	//结构体数组：结构体数据类型 数组名[];
	
	houxuanren arr[2] = { "chuanpu", 0, "biden", 0}; 

	char input_name[30];
	//10个候选委员会的成员开始投票
	
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("第%d个投票: ", i+1);

		scanf("%s", input_name);

		for(j=0;j<2;j++)
		{
			if( strcmp(input_name, arr[j].name)  == 0)
			{
				arr[j].number++;
			}
		}
	}

	printf("投票结果: \n");

	for(i=0; i<2; i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].number);
	}


	return 0;
}
