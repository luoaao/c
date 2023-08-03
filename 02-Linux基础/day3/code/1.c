#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	float a[10],max,min,sum = 0,ave;
	int i ;
	for(i = 0; i<10; i++){
		scanf("%f", &a[i]);
		sum+=a[i];
	}
	max = min = a[0];
	for(i = 1; i<10; i++){
		if(min>a[i])
			min = a[i];
		if(max<a[i])
			max = a[i];
	}
	ave = (sum - min - max)/8;
	printf("%.2f\n",ave);


	return 0;
}
