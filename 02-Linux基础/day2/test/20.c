#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int num,i;
	for(num = 1; num<=1000; num++){
		int sum = 0;
		for(i = 1; i<=num/2; i++){
			if(num%i==0){
				sum += i;
			}
		}
		if(sum == num){
		printf("%d is wan number \n",num);
		}
	}
	return 0;
}
