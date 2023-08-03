#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	for(int i = 0; i<5; i++)
	{
		printf("kunkun 真好看!\n");
	}

	//求1~100的和
	int sum = 0;

	for(int j = 1; j <= 100; j++)
	{
		sum += j;
		//printf("sum = %d\n", sum);
	}
	
	printf("sum = %d\n", sum);

	return 0;
}
