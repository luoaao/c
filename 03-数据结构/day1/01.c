#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(int argc, const char *argv[])
{
	typedef struct{
		int data[SIZE];
		int index;
	}sqlist_t;

	sqlist_t sqlist;
	memset(sqlist.data,0,sizeof(sqlist.data));

	/*int i = 0;
	for(; i<SIZE; i++){
		printf("%d \n",sqlist.data[i]);
	}*/
	sqlist.index = -1;

	int len = sqlist.index+1;

	sqlist.index++;
	sqlist.data[sqlist.index] = 10;

	sqlist.index++;
	sqlist.data[sqlist.index] = 20;

	sqlist.index++;
	sqlist.data[sqlist.index] = 30;

	int pos = 1;
	int i = 0;
	for(i=sqlist.index;i>=pos;i--){
		sqlist.data[i+1] = sqlist.data[i];
	}
	sqlist.data[pos] = 15;
	sqlist.index++;


	for(i=0;i<sqlist.index+1;i++){
		printf("%d\n",sqlist.data[i]);
	}

	return 0;
}
