#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	int *p = a;

	int *p1 = &a[3];  //4

	int *p2 = &a[8];  //9

	printf("p2-p1=%ld\n", p2-p1);


	if(p1 > p2)
	{
		printf("p1大一点\n");
	}
	else{
		printf("p2大一点\n");
	}


	return 0;
}
