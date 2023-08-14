#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	FILE *fp = fopen("text.txt","r");
	if(NULL == fp){
	perror("fopen");
	return -1;
	}
	char buf[32];
	fgets(buf,32,fp);
	int i = 0;
	for(;i<32;i++){
		printf("buf[%d]-->%d-->%c\n",i,buf[i],buf[i]);
	}
	return 0;
}
