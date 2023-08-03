#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int  a,i,j;
	int up,down;
	scanf("%d",&a);
	up = a/2;
	down = a-up;

	for(i = 1; i<=up; i++){
		for(j = up-i; j>=0; j--){
			printf(" ");
		}
		for(j=1; j<=i*2-1; j++){
			printf("*");
		}
		printf("\n");
	}
	for(i =down; i>0; i-- ){
		for(j = down-i; j>=0; j--){
			printf(" ");
		}
		for(j=1; j<=i*2-1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
