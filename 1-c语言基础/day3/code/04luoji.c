#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//int a = 1, b = 0;

	//逻辑与： 同时满足两边的条件即为真
	printf("%d\n", (1 && 0)?1:0); //0
	printf("%d\n", (0 && 1)?1:0); //0
	printf("%d\n", (1 && 1)?1:0); //1
	printf("%d\n", (0 && 0)?1:0); //0


	//逻辑或： 满足任意一边的条件即为真
	printf("%d\n", (0 || 0)?1:0); //0
	printf("%d\n", (1 || 1)?1:0); //1
	printf("%d\n", (1 || 0)?1:0); //1
	printf("%d\n", (0 || 1)?1:0); //1

	//逻辑非： 真-->假  假-->真
	printf("%d\n", !1?1:0); //0
	printf("%d\n", !0?1:0); //1


	return 0;
}
