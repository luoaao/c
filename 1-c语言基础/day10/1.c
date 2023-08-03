#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a = 1, b = 2;
	while(b<100){
		b=b*2+1;
		a++;
	}
	printf("%d day small %d\n",a-1,(b-1)/2);
	return 0;
}
