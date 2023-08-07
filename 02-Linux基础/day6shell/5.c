#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void paixu(int (*p)[5])
{
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4-j;k++){
				if(*(*(p+i)+k)>*(*(p+i)+k+1)){
					*(*(p+i)+k) ^= *(*(p+i)+k+1);
					*(*(p+i)+k+1) ^= *(*(p+i)+k);
					*(*(p+i)+k) ^= *(*(p+i)+k+1);

				}
			}
		}
	}
}

int main(int argc, const char *argv[])
{
	int arr[5][5];
	int i,j;
	srand(time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			arr[i][j] = rand()%100;
			printf("%d ",arr[i][j]);
		}
		puts("");
	}
	paixu(arr);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",arr[i][j]);
		}
		puts("");
	}

	return 0;
}
