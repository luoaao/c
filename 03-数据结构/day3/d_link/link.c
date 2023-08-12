#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "link.h"

link_t *linkCreate()
{
	link_t *head = (link_t *)malloc(sizeof(link_t));
	if(head == NULL){
		return NULL;
	}
	head->data = -1;
	head->next = NULL;
	head->prior  = NULL;
	return head;
}

int linkIsEmpty(link_t *head)
{
	if(NULL == head){
		return -1;
	}
	return head->next == NULL;
}

int linkGetLength(link_t *head){
	if(NULL == head){
		return -1;
	}
	int len = 0;
	link_t *p = head->next;
	while(p!= NULL){
		len++;
		p=p->next;
	}
	return len;
}

int linkInsertPos(link_t *head, data_t data, int pos)
{
	if(NULL == head){
		return -1;
	}
	int len = linkGetLength(head);
	if(pos<0 || pos >len){
		printf("pos err...\n");
		return -1;
	}
	link_t *p = head;
	int i =0;
	for(;i<pos;i++){
		p= p->next;
	}
	link_t *new = (link_t *)malloc(sizeof(link_t));
	new->data = data;
	if(p->next == NULL){
		new->next = p->next;
		p->next = new;
		new->prior = p;
	}else{
		new->next = p->next;
		p->next->prior = new;
		p->next = new;
		new->prior = p;
	}
	return 0;

}

void linkShow(link_t *head)
{
	if(NULL == head){
		return;
	}
	link_t *p = head->next;
	link_t *q = head->next;
	while(p != NULL){
		printf("%d ",p->data);
		q=p;
		p = p->next;
	}
	puts("shunxu   ....");
	// while(q!=head){
	// 	printf("%d ",q->data);
	// 	q = q->prior;
	// }
	// puts("nixu   ....");
	
}

int linkDeletePos(link_t *head, int pos)
{
	if(NULL == head){
		return -1;
	}
	int len = linkGetLength(head);
	if(pos<0 || pos > len-1){
		printf("pos err...\n");
		return -1;
	}
	link_t *p = head->next;
	int i = 0;
	for(;i<pos;i++){
		p = p->next;
	}

	if(p->next == NULL){
		p->prior->next =p->next;
		free(p);
	}else{
		p->prior->next = p->next;
		p->next->prior = p->prior;
		free(p);
	}
	return 0;
	
}

int linkDeleteData(link_t *head, data_t data)
{
	if(NULL == head){
		return -1;
	}
	if(linkIsEmpty(head)){
		printf("空表\n");
		return -1;
	}
	link_t *p = head->next;
	while(p != NULL){
		if(p->next->data == data)
		{
			link_t *q = p->next;
			p->next = q->next;
			free(q);
			return 0;
		}
		p = p->next;
	}
	return -1;


}

link_t *linkResachData(link_t *head , data_t data)
{
	if(NULL == head){
		return NULL;
	}
	if(linkIsEmpty(head)){
		return NULL;
	}
	link_t *p = head->next;
	while(p != NULL){
		if(p->data == data)
		{
			return p;
		}
		p = p->next;
	}
	return NULL;
	

}

link_t *linkResachPos(link_t *head, int pos)
{
	if(NULL == head){
		return NULL;
	}
	if(linkIsEmpty(head)){
		return NULL;
	}
	int len = linkGetLength(head);
	if(pos<0 || pos >len-1){
		printf("pos err...\n");
	}
	int i = 0;
	link_t *p = head->next;
	for(;i<pos;i++){
		p = p->next;
	}
	return p;

}

int linkUpdateData(link_t *head, data_t olddata, data_t newdata)
{
	link_t *p = linkResachData(head, olddata);
	if(NULL == p){
		return -1;
	}
	p->data = newdata;
	return 0;
}

int linkUpdatePos(link_t *head,int pos,data_t data)
{
	link_t *p = linkResachPos(head, pos);
	if(NULL == p){
		return -1;
	}
	p->data = data;
	return 0;
}

int linkClear(link_t *head)
{
	if(NULL == head)
	{
		return -1;
	}
	int len = linkGetLength(head);
	int i = 0;
	for(; i < len; i++){
		linkDeletePos(head, 0);
	}
	
	return 0;
}
int linkRevert(link_t *head)
{
	if(NULL == head){
		return -1;
	}
	if(linkIsEmpty(head)){
		printf("空表\n");
		return -1;
	}
	int len = linkGetLength(head);
	link_t *p = head->next;
	head->next =NULL;
	int i = 0;
	for(;i<len;i++){
		link_t *q = p;
		p = p->next;
		q->next = head->next;
		head->next = q;

	}
	return 0;
}
int linkSort(link_t *head){
	if(NULL == head){
		return -1;
	}
	if(linkIsEmpty(head)){
		printf("空表\n");
		return -1;
	}
	int len = linkGetLength(head);
	link_t *p = head->next;
	head->next =NULL;
	int i = 0,j = 0;
	for(;i<len;i++){
		link_t *q = p;
		p = p->next;
		link_t *m = head;
		for(j=0;j<i;j++){
			if((q->data)>(m->next->data)){
				m = m->next;
			}
		}
		q->next = m->next;
		m->next = q;

	}
	return 0;
}


