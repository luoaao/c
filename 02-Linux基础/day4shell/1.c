#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ling(int a)
{
	int head = a/2;
	int tail = a-head;
	
	int i, j;
	for(i=1; i<=head; i++){
		for(j=0; j<head-i;j++){
			printf(" ");
		}
		for(j=0; j<2*i-1;j++){
			if(j==0||j==2*i-2)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=tail; i>0; i--){
		for(j=0; j<head-i;j++){
			printf(" ");
		}
		for(j=0; j<2*i-1;j++){
			if(j==0||j==2*i-2)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
int main(int argc, const char *argv[])
{
	int a = 0;
	scanf("%d",&a);
	ling(a);
	return 0;
}
