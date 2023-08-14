/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：02_hash.c
*   创 建 者：JiangCX
*   创建日期：2023年08月15日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

typedef int data_t;
typedef struct Node{
	data_t data;
	struct Node *next;
}link_t;

void hashCreate(int *k, int len, int p, link_t **hash);
void hashShow(link_t **hash, int len);
link_t *hashSearch(link_t **hash, data_t data, int p);

int main()
{
	int k[]={ 23,34, 14, 38, 46, 16, 68, 15, 7, 31, 26 };

	int len = sizeof(k) / sizeof(int);
	//hash 表长: n / m = 0.8 --> m == 15;
	link_t *hash[15] = {NULL};   

	int p = 13;//小于表长的最大质数

	//创建hash 表
	hashCreate(k, len, p, hash);
	//遍历hash表
	hashShow(hash, 15);
	//查找元素
	link_t *q = hashSearch(hash, 460, p);
	if(q == NULL){
		printf("no such the data:\n");
		return -1;
	}
	printf("data: %d\n", q->data);

	return 0;
}
void hashCreate(int *k, int len, int p, link_t **hash)
{
	int i = 0;
	for(i = 0; i < len; i++){
		int pos = k[i] % p;
		link_t *new = (link_t *)malloc(sizeof(link_t));
		if(new == NULL){
			return;
		}
		new->data = k[i];
		new->next = NULL;
		
		if(hash[pos] == NULL){
			hash[pos] = new;
		}else{
			new->next = hash[pos];
			hash[pos] = new;
		}
	}
	return;
}
void hashShow(link_t **hash, int len)
{
	int i = 0;
	for(i = 0; i < len; i++){
		link_t *p = hash[i];
		while(p != NULL){
			printf("%d ", p->data);
			p = p->next;
		}
		puts("");
	}
}
link_t *hashSearch(link_t **hash, data_t data, int p)
{
	int pos = data % p;
	
	link_t *q = hash[pos];

	while(q != NULL){
		if(q->data == data){
			return q;
		}
		q = q->next;
	}

	return NULL;
}
