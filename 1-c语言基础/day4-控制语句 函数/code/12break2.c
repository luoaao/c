#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("游戏菜单:1.DNF 2.LOL 3.APEX 4.CF 5.CSGO\n");

	printf("请输入一个数字: ");
	int m;
	scanf("%d", &m);
	
	switch(m)
	{
		case 1:
				printf("DNF\n");
				break;
		case 2:
				printf("LOL\n");
				break;
		case 3:
				printf("APEX\n");
				break;
		case 4:
				printf("CF\n");
				break;
		case 5:
				printf("CSGO\n");
				break;

		default:
				printf("error\n");
				break;
	}

	return 0;
}
