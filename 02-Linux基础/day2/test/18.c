#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int jie(int i)
{
	if(i == 1)
		return 1;
	else 
		return i*jie(i-1);

}

int main(int argc, const char *argv[])
{
	int i;
	scanf("%d",&i);
	printf("%d\n",jie(i));
	return 0;
}
