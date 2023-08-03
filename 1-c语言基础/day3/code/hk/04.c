#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入一个华氏温度: ");
	float F;
	scanf("%f", &F);

	float C = 5.0/9*(F-32);

	printf("C = %.2f\n", C);

	return 0;
}
