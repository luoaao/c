#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printStrings(char arr[][100],int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("%s\n",arr[i]);
	}
}

void paiString(char arr[][100], int size)
{
	int i,j;
	char ar[100];
	for(i=0; i<size-1; i++){
		for(j=0;j<size-1-i;j++){
			if((strcmp(arr[j],arr[j+1])>0)){
				strcpy(ar,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],ar);
			}
		}
	}

}
int main(int argc, const char *argv[])
{
	char arr[][100] = {"hello","word","ni hao","chengdu","good","huaqing"};
	int size = sizeof(arr)/sizeof(arr[0]);
	printStrings(arr,size);
	paiString(arr,size);
	puts("");
	printStrings(arr,size);
	return 0;
}
