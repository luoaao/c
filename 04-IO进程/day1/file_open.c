#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
	FILE *fp = fopen("text.txt","w+");
	if(fp==NULL){
		//printf("err....\n");
		//printf("fopen:%s\n",strerror(errno));
		//fprintf(stderr, "fopen:%s\n",strerror(errno));
		perror("fopen");
		return -1;
	}
	printf("open success\n");
	
	return 0;
}
