#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
#if 0	
	time_t t;

	while(1)
	{
		time(&t);
		//int i = time(NULL);
		//printf("i=%d\n", i);

		char *p = ctime(&t);

		printf("%s\n", p);

		sleep(1);
	}
#endif		
	srand(time(NULL));

	for(int i =0; i<10; i++)
	{
		printf("%d ", rand()%10);
	}

	puts("");

	return 0;
}
