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

	printf("empty: %d\n",linkIsEmpty(head));
	printf("len: %d\n",linkGetLength(head));
	int i = 0;
	for(;i<10;i++){
		linkInsertPos(head,i+1,0);
	}
	
	
	linkShow(head);
	linkDeletePos(head,2);
	linkShow(head);
	link_t *p = linkResachData(head, 3);
	if(p== NULL){
		printf("没有\n");
	}
	else{
		printf("数据为%d\n", p->data); 
	}
	linkUpdateData(head,3,33);
	linkShow(head);
	linkDeleteData(head,5);
	linkShow(head);
	
	p = linkResachPos(head, 3);
	if(p== NULL){
		printf("没有\n");
	}
	else{
		printf("数据为%d\n", p->data); 
	}
	linkUpdatePos(head,3,999);
	linkShow(head);
	linkRevert(head);
	linkShow(head);
	linkSort(head);
	linkShow(head);


	linkClear(head);
	linkDestroy(&head);
	printf("empty: %d\n",linkIsEmpty(head));
	printf("len: %d\n",linkGetLength(head));


	return 0;
}

