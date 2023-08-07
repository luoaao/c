#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int arr[5][3] = {{4,3,5},{2,4,6},{7,5,4},{4,6,3},{99,5,3}};
	int sums[5] = {0};

	int i,j;
	for(i=0;i<5;i++){
		int sum = 0;
		for(j=0;j<3;j++){
			sum+=*(*(arr+i)+j);
			printf("%d ",*(*(arr+i)+j));
		}
		sums[i] = sum;
		puts("");
	}
	for(i=0;i<5;i++){
		printf("%d hang sum is %d\n",i+1, sums[i]);
	}
	

	return 0;
}
