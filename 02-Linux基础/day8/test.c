#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isnum(int num)
{
	int a,b,c=0;
	a=num;
	while(a!=0){
		b = a%10;
		c += b*b*b;
		a /=10;
	}
	if(c == num)
		return 1;
	else
		return 0;
}

int main(int argc, const char *argv[])
{
	int num;
	for(num=100;num<1000;num++){
		if(isnum(num)){
			printf("%d ",num);
		}
	}
	return 0;
}
