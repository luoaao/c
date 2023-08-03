#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	printf("请输入三角形的三条边: ");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	float s = (a+b+c)/2;

	float area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("area = %.2f\n", area);

	return 0;
}
