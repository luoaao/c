#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("请输入三个数字: ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if(a > b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}

	if(a > c)
	{
		a ^= c;
		c ^= a;
		a ^= c;
	}

	if(b > c)
	{
		int t;
		t = b;
		b = c;
		c = t;
#if 0		
		b ^= c;
		c ^= b;
		b ^= c;
#endif
	}

	printf("%d %d %d\n",a ,b ,c);

	return 0;
}
