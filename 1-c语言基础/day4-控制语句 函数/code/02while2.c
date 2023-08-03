#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//求5！
	
	int i = 5;

	int sum = 1;

	while(i>0)  //i<6 or i<=5
	{
		sum *= i; //sum = sum * i;

		i--;
	}

	printf("%d\n", sum);

	return 0;
}
