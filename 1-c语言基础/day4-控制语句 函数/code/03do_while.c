#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//do while 
	
	int i = 0;

	do{
		printf("菜许坤很帅!\n");
		i++;
	}while(i<5);


	//练习：求1-100的和

	int j = 1;
	int sum = 0;

	do{
		sum += j;
		j++;

	}while(j<=100);

	printf("%d\n", sum);

	
	//另外的情况
	
	int a = 100;

	do{
		printf("xxxxx\n");
	}while(a < 100);

	//先执行循环体，再判断表达式
	//总会执行一次

	return 0;
}
