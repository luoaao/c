#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int m, int n){
	while(m != 0){
		int i = n%m;
		n = m;
		m = i;
	}
	return n;
}
int min(int m, int n){
	return m*n/max(m,n);
}
int main(int argc, const char *argv[])
{
	int m, n;
	scanf("%d %d",&m, &n);
	printf("%d\n ", max(m,n));
	printf("%d\n ", min(m,n));
	return 0;
}
