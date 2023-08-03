#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sum(int *p, int (*q)[3]){
	for(int i = 0; i<5; i++){
		*(p+i) = 0;
		for(int j = 0; j<3; j++){
			*(p+i) += q[i][j];
		}
	}
}

int main(int argc, const char *argv[])
{
	int arr[5][3] = {{1,2,3},{4,5,6},{7,8,9},{2,4,5},{6,8,5}};
	for(int i = 0; i<5; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int sum_array[5];
    
    Sum(sum_array,arr);
    
    printf("每行元素之和：\n");
    for (int i = 0; i < 5; i++) {
        printf("第 %d 行: %d\n", i+1, sum_array[i]);
    }
	
	return 0;
}

