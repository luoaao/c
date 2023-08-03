#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int num, i;

	for(num=300; num<=400; num++)
	{
		for(i=2; i<num; i++)
		{
			if(num % i == 0)
			{
				//说明这个num不是素数
				goto xxx;
			}
		}
			
		//说明是素数
		printf("%d ", num);

xxx:
		;
	}

	puts("");

	return 0;
}
