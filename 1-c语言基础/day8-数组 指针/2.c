#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Input(int *num){
	printf("please input 10 nums:");
	for(int i=0; i<10; i++){
		scanf("%d",(num+i));
	}
}

void Chuli(int *num){
	int max = *num, min = *num;
	int sum=0;
	double a;
	for(int i = 0; i < 10; i++){
		if(*(num+i)>max)
			max = i;
		if(*(num+i)<min)
			min = i;
		sum += *(num+i);
	}
	a = (sum-min-max)*(1.0)/8;
	printf("%lf\n",a);

}


int main(int argc, const char *argv[])
{
	int num[10];
	Input(num);
	Chuli(num);
	return 0;
}
