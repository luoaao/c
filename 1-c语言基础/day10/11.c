#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a[10];
	printf("please input 10 people:");
	for(int i = 0; i<10; i++){
		scanf("%d", &a[i]);
	}
	int count=0;
	for(int i = 0; i<10; i++){
		if(a[i]<60)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
