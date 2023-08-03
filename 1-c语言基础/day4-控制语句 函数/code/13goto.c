#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
start:

	printf("桃园三结义\n");

	printf("刘备跳3米\n");

	//goto start;
	goto end;

	printf("关羽跳5米\n");

	printf("张飞跳108米\n");
	
	printf("诸葛亮跳10086米\n");

end:

	printf("曹操跳0.5米\n");

	return 0;
}
