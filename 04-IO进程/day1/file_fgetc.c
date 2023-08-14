#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	FILE *fp = fopen("text.txt","r");
	if(fp == NULL){
		perror("fopen");
		return -1;
	}
	while(1){
	int ret = fgetc(fp);
	if(ret == EOF){
	printf("ret = %c \n",ret);
		perror("fgetc");
		printf("err....\n");
		return -1;
	}
	printf("ret = %c \n",ret);
	}
	fclose(fp);
	return 0;
}
