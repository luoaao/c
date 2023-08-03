#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int num,i,bol = 0;
	for(num = 101; num<=500; num++){
		for(i=2; i*i<num; i++){
			if(num%i == 0)
				bol = 1;
		}
		if(bol == 0)
			printf("%d ",num);
		bol = 0;
	}
	puts("");
	return 0;
}
