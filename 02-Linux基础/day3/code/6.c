#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cha(int *p, int *a)
{
	int m,n=0;
	int i;
	printf("input: ");
	scanf("%d",&m);
	for(i = 0; i<*a; i++){
		if(p[i]>m){
			n = i;
			break;
		}
	}
	for(i = (*a)++; i>n; i-- ){
		p[i] = p[i-1];
	}
	p[n] = m;

}

int main(int argc, const char *argv[])
{
	int a[100] = {1,3,5,7,9};
	int i;
	int num = 5;
	cha(a,&num);
	for(i = 0; i<num; i++){
		printf("%d ", a[i]);
	}
	puts("");

	return 0;
}
