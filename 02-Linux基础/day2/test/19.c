#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a;
	scanf("%d",&a);
	int i,j ,sum = 0;
	for(i = 1; i<=a; i++){
		int n = 1;
		for(j = 1; j<=i; j++){
			n *= j;
		}
		sum+=n;
	}
	printf("%d\n",sum);
	return 0;
}
