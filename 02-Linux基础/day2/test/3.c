#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void erjinz(int num){
	int arr[32];
	int index = 0;
	int i;
	if(num == 0){
		printf("0\n");
		return;
	}
	while(num>0){
		arr[index++] = num%2;
		num = num/2;
	}
	for(i =index-1; i>=0; i-- ){
		printf("%d",arr[i]);
	}
	puts("");
}

int main(int argc, const char *argv[])
{
	int num;
	 scanf("%d",&num);
	printf("er jin zhi:");
	erjinz(num);
	return 0;
}
