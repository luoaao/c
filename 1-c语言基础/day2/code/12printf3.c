#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{	
	int a = 12;
	float f = 3.14;

	printf("%5d\n", a); //右对齐5个字节
	printf("%-5d\n", a); //左对齐5个字节
	printf("%05d\n", a); //右对齐5个字节，前面部分补0

	int b = 35;
	int c = -35;
	
	printf("%+d\n", b);
	printf("%d\n", c);

	printf("%.2f\n", f);

	short d = 123;
	printf("%hd\n", d); //字节长度：hd只有d的一半
	
	char h = 'a';

	printf("%hhd\n", h); //hhd 只有 d 的一半的一半

	long j = 123456;

	printf("%ld\n", j);

	long long y = 123456789;

	printf("%lld\n", y);

	return 0;
}
