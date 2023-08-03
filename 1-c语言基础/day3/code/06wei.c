#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
/*	
	char ch = 5;

	printf("%d\n", ~ch);
*/

#if 0	
	char ch = 127;

	char ch2 = ch+1;

	printf("%d\n", ch2);
#endif

	printf("%#x\n", 0x67 & 0x89);
	printf("%#x\n", 0x67 | 0x89);
	printf("%#x\n", 0x67 ^ 0x89);

	int a = 1, b =2;

	printf("%d %d\n", a, b);

	a ^= b;  //a = a^b;
	b ^= a; //b = b^a;
	a ^= b; //a = a^b;  //a, b进行了交换

	printf("%d %d\n", a, b);

	char h = 0x67;

	//左移
	printf("%#x\n", h << 4);
	
	//正数右移
	printf("%d\n", h >> 2);
	
	//负数右移
	printf("%d\n", -6 >> 2);

	return 0;
}
