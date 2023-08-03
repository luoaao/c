#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int whi = 3, red = 3, bla = 6, count = 0;
	for(int i = 0;i<=whi; i++){
		for(int j = 0; j<=red; j++){
			for(int n = 0; n<=bla; n++)
				if(i+j+n == 8){
					count++;
					printf("%d %d %d\n", i,j,n);}

		}
	}
	printf("%d \n",count);
	return 0;
}
