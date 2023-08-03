#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int i = 1;
	for(int day = 9; day>=1; day--){
		i = (i+1)*2;
	}
	printf("%d\n" ,i);
	return 0;
}
