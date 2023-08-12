#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sq_stack.h"

int main(int argc, const char *argv[])
{
	stack_t *stack = stackCreate();
	if(NULL == stack){
		printf("err...\n");
		return -1;
	}
	printf("successfull\n");


	return 0;
}
