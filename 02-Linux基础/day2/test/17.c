#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int a;
	scanf("%d",&a);
	if((a%4 == 0 && a%100 != 0) || a%400 ==0)
		printf("%d is runnian\n",a);
	else
		printf("%dbushi\n",a);
	return 0;
}
