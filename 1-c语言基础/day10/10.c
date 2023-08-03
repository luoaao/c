#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int i;
	char chr;
	printf("please choose A:95 b:97 C:99:");
	scanf("%c", &chr);
	switch(chr){
		case 'A':
		case 'a':
			printf("95 100/L\n");
			break;
		case 'B':
		case 'b':
			printf("97 1000/L\n");
			break;
		case 'C':
		case 'c':
			printf("99  10000/L\n");
			break;
		default:
			printf("error\n");
			break;
	}
	
	return 0;
}
