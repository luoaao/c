#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	FILE *fp = fopen("text.txt","r");
	if(NULL == fopen){
		perror("fopen");
		return -1;
	}
	int count = 0,ret;

	while(EOF != (ret = fgetc(fp)) ){
		if(ret == '\n')
			count++;
	}
	printf("have %d hang\n",count);
	return 0;
}
