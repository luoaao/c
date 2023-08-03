#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int num,nums,s,sum = 0;
	int i;
	printf("input num:");
	scanf("%d",&num);
	printf("input nums:");
	scanf("%d",&nums);
	s = num;
	for(i=1; i<=nums; i++){
		sum += s;
		s = s*10+num;
	}
	printf("%d\n",sum);
	return 0;
}
