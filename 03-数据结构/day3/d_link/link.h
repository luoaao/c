#ifndef _LINK_H
#define _LINK_H

typedef int data_t;
typedef struct node{
	data_t data;
	struct node *next;
	struct node *prior;
}link_t;

link_t *linkCreate();

int linkIsEmpty(link_t *link);

int linkGetLength(link_t *head);

int linkInsertPos(link_t *head, data_t data, int pos);

void linkShow(link_t *head);

int linkDeletePos(link_t *head, int pos);

int linkDeleteData(link_t *head, data_t data);

link_t *linkResachData(link_t *head, data_t data);

link_t *linkResachPos(link_t *head, int pos);

int linkUpdateData(link_t *head, data_t olddata, data_t newdata);

int linkUpdatePos(link_t *link,int pos,data_t data);

int linkClear(link_t *link);

int linkRevert(link_t *head);

int linkSort(link_t *head);

int linkDestroy(link_t **link);




#endif
