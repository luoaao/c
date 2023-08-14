#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	FILE *fp_w = fopen(argv[1],"r");
	FILE *fp_r = fopen(argv[2],"w");
	
	if(fp_w ==NULL){
		perror("fopen");
		return -1;
	}
	if(fp_r == NULL){
		perror("fopen");
		return -1;
	}
	int ret = fgetc(fp_w);
	while(ret != EOF){
		fputc(ret,fp_r);
		ret = fgetc(fp_w);
	}
	fclose(fp_w);
	fclose(fp_r);
	return 0;
}
