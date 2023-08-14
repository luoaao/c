#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	FILE *fp = fopen("text.txt","a+");
	if(fp==NULL){
		perror("fopen");
		return -1;
	}
	fputc('d',fp);
	int ret = fgetc(fp);
	printf("ret = %c\n",ret);
	fclose(fp);
	return 0;
}
