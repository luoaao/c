#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a;
	float b;

	int n = scanf("%d%f", &a, &b);
	
	//n表示正确输入的参数个数
	//输入10 3.14   ok ,ok  返回2
	//输入10 a      ok ,err 返回1
	//输入3.14 3.14 err,ok  返回0
	//输入3.14 a    err,err 返回0
	printf("n=%d\n", n);

	printf("%d %f\n", a,b);
	
	return 0;
}
