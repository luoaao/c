#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 10;
	float b = 3.14;
	double c = 5.56;

	//printf("%d %f\n", a, b);

	//printf("%f %c\n", a);

	printf("%d\n", a);  //OK

	printf("%d\n", 1122); //OK

	printf("%d\n", 11+22+33); //OK

	printf("%f\n", b);
	printf("%f\n", c);

	printf("%s%%//\n", "xxx");

	printf("xxx\n");

	return 0;
}
