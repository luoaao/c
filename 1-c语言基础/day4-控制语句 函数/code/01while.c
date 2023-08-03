#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//求1 - 100 的和

	int i = 1; 

	int sum = 0;

	while( i<=100 )
	{
		//累加
		sum += i;  //sum = sum + i;

		i++;
	}

	printf("sum = %d\n", sum);

	return 0;
}
