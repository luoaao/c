#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "link.h"

int main(int argc, const char *argv[])
{
	link_t *head = linkCreate();
	if(head == NULL){
		printf("linkCreate failed...\n");
		return -1;
	}
	printf("create successful...\n");
	printf("len: %d\n",linkGetLength(head));
	printf("empty: %d\n",linkIsEmpty(head));
	int i = 10;
	while(i--){
		linkInsertPos(head,i,0);
	}
	linkShow(head);

	linkDeletePos(head,4);
	linkShow(head);
	linkDeletePos(head,8);
	linkShow(head);
	
	return 0;
}

