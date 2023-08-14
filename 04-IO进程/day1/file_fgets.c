#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("input strs\n");
	char buf[10] = {0};
	fgets(buf,5,stdin);
	int i = 0;
	for(;i<5;i++){
		printf("%c = %d\n",buf[i],buf[i]);
	}
	return 0;
}
