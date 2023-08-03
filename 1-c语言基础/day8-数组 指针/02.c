#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Input(int *num){
	printf("please input 10 nums:");
	for(int i=0; i<10; i++){
		scanf("%d",(num+i));
	}
}
void Output(int *num){
	printf("finaly: ");
	for(int i=0; i<10; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}

void Chuli(int *num){
	int max = *num, min = *num;
	for(int i = 0; i < 10; i++){
		if(*(num+i)>max)
			max = i;
		if(*(num+i)<min)
			min = i;
	}
	*num =*(num+min);
	*(num+9) = *(num+max);

}


int main(int argc, const char *argv[])
{
	int num[10];
	Input(num);
	Chuli(num);
	Output(num);
	return 0;
}
