#include "while.h"

int jiecheng(int num)
{	
	int i = num;

	int sum = 1;

	while(i>0)  //i<6 or i<=5
	{
		sum *= i; //sum = sum * i;

		i--;
	}
	
	printf("sum = %d\n", sum);
	return sum;
}
