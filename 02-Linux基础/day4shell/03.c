#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len;

void paixu(int arr[], int len, int arrr[][len])
{
	int i,j,indexji=0,indexou=0;
	for(i=0;i<2;i++){
		for(j=0;j<len;j++){
			arr[i][j]=-1;
		}
	}

	for(i=0;i<len;i++){
		if(arr[i]%2 == 0)
			arrr[0][indexou++] = arr[i];
		else
			arrr[1][indexji++] = arr[i];
	}

	for(i=0; i<indexou-1;i++){
		for(j=0; j<indexou-1-i;j++){
			if(arrr[0][j]<arr[0][j+1])
			{
				arrr[0][j] ^= arrr[0][j+1]
				arrr[0][j+1] ^= arrr[0][j+1]
				arrr[0][j] ^= arrr[0][j+1]
			}
		}
	}


}

int main(int argc, const char *argv[])
{
	int arr[]={1,34,342,2345,23,,42,23,4,23,5,62,3,4,46,6,4,43,56,51,45,65};
	len = sizeof(arr)/sizeof(arr[0]);
	int arrr[2][len];
	paixu()
	return 0;
}
