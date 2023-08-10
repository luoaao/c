#ifndef _SQLIST_H
#define _SQLIST_H

#define SIZE 100
typedef int data_t;
typedef struct{
	data_t data[SIZE];
	int index;
}sqlist_t;

sqlist_t *sqlistCreate();

int sqlistGetLength(sqlist_t *sqlist);

int sqlistIsFull(sqlist_t *sqlist);

int sqlistIsEmpty(sqlist_t *sqlist);

int sqlistInsertPos(sqlist_t *sqlist, data_t data, int pos);

void sqlistShow(sqlist_t *sqlist);

int sqlistDeletePos(sqlist_t *sqlist, int pos);

int sqlistResachPos(sqlist_t *sqlist , data_t data);

int sqlistUpdateData(sqlist_t *sqlist, data_t olddata, data_t newdata);

int sqlistClrar(sqlist_t *sqlist);

int sqlistDestroy(sqlist_t *sqlist);
#endif
