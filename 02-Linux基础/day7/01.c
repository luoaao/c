#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char arr[5][32] = {"hello","word","apple","peach","pear"};
	char (*p)[32] = arr;
	int c = sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(;i<c;i++){
		puts(p[i]);
	}
	
	return 0;
}
