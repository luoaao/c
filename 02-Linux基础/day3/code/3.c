#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10] = {},i;
	int max,maxin = 0,min,minin = 0;
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	max = min = a[0];
	for(i=0; i<10;  i++){
		if(max<a[i]){
			max = a[i];
			maxin = i;
		}
		if(min>a[i]){
			min = a[i];
			minin = i;
		}

	}
	printf("max is %d index is %d\n",max,maxin);
	printf("min is %d index is %d\n",min,minin);

	return 0;
}
