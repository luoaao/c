/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：link.c
 *   创 建 者：JiangCX
 *   创建日期：2023年08月12日
 *   描    述：
 *
 *   更新日志：
 *
 ================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "linklist.h"

//1.创建一个链表
link_t *linkCreate()
{
	link_t * head = (link_t *)malloc(sizeof(link_t));
	if(head == NULL){
		return NULL;
	}
	head->data = -1;
	head->next = NULL;

	return head;
}
//2.
int linkGetLength(link_t *head)
{
	if(head == NULL){
		return -1;
	}
	int len = 0;
	link_t *p = head->next;
	while(p != NULL){
		len++;
		p = p->next;
	}
	return len;
}

//3.判空
int linkIsEmpty(link_t *head)
{
	if(head == NULL){
		return -1;
	}
	return head->next == NULL;
}

//4.遍历链表
void linkShow(link_t *head)
{
	if(head == NULL){
		return;
	}
	link_t *p = head->next;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	puts("");
}
//5.按位置插入
int linkInsertPos(link_t *head, data_t data, int pos)
{
	//1. 判断链表是否存在
	if(head == NULL){
		return -1;
	}
	//2.判断位置是否合法
	int len = linkGetLength(head);
	if(pos < 0 || pos > len){
		printf("pos error\n");
		return -1;
	}
	//3.找到要插入位置的前一个节点
	link_t *p = head;
	int i = 0;
	for(; i < pos; i++){
		p = p->next;
	}
	//4.创建新节点
	link_t *new = (link_t *)malloc(sizeof(link_t));
	if(new == NULL){
		printf("malloc failed...\n");
		return -1;
	}
	new->data = data;
	//插入：
	//让新节点指向后一个节点
	new->next = p->next;
	//让前一个节点指向新节点
	p->next = new;

	return 0;

}
//6.按位置删除
int linkDeletePos(link_t *head, int pos)
{
	//1.判断链表是否为空
	if(linkIsEmpty(head)){
		printf("head is empty\n");
		return -1;
	}
	//2.判断位置是否合法
	int len = linkGetLength(head);
	if(pos < 0 || pos > len-1){
		printf("pos error\n");
		return -1;
	}
	//3.删除
	//3.1 找到要删除的前一个节点
	int i = 0;
	link_t *p = head;
	for(; i < pos; i++){
		p = p->next;
	}
	//保存要删除的节点的地址
	link_t *q = p->next;
	p->next = q->next;
	free(q);
	q = NULL;
	return 0;
}
//7.按数据查找
link_t *linkSearchData(link_t *head, data_t data)
{
	if(head == NULL){
		return NULL;
	}
	link_t *p = head->next;
	while(p != NULL){
		if(p->data == data){
			return p;
		}
		p = p->next;
	}
	return NULL;
}
int linkUpdateData(link_t *head, \
		data_t olddata, data_t newdata)
{
	if(head == NULL){
		return -1;
	}
	link_t *p = linkSearchData(head, olddata);
	p->data = newdata;
	return 0;
}
//9.
int linkClear(link_t *head)
{
	while(!linkIsEmpty(head)){
		linkDeletePos(head, 0);
	}
	return 0;
}
//10
int linkDestroy(link_t **head)
{
	linkClear(*head);
	free(*head);
	*head = NULL;

	return 0;
}

//按数据删除
int linkDeleteData(link_t *head, data_t data)
{
	if(head == NULL){
		return -1;
	}
	link_t *p = head;
	while(p->next != NULL){
		if(p->next->data == data){
			//删除
			link_t *q = p->next;
			p->next = q->next;
			free(q);
			return 0;
		}
		p = p->next;
	}
	return -1;
}

//按位置查找
data_t linkSearchPos(link_t *head, int pos)
{
	if(head == NULL){
		return (data_t)-1;
	}
	if(linkIsEmpty(head)){
		return (data_t)-1;
	}
	if(pos < 0 || pos > linkGetLength(head)-1){
		printf("pos error\n");
		return (data_t)-1;
	}

	link_t *p = head->next;
	int i;
	for(i = 0; i < pos; i++){
		p = p->next;
	}

	return p->data;
	
}
//按位置更新
int linkUpdatePos(link_t *head, int pos, data_t data)
{
	if(head == NULL){
		return (data_t)-1;
	}
	if(linkIsEmpty(head)){
		return (data_t)-1;
	}
	if(pos < 0 || pos > linkGetLength(head)-1){
		printf("pos error\n");
		return (data_t)-1;
	}

	link_t *p = head->next;
	int i;
	for(i = 0; i < pos; i++){
		p = p->next;
	}
	p->data = data;
	
	return 0;
}
void linkRevert(link_t *head)
{
	if(head == NULL){
		return ;
	}
	if(linkIsEmpty(head)){
		return;
	}

	link_t *p = head->next; 
	head->next = NULL; //将头结点和p指向的节点断开
	link_t *q = NULL;
	
	while(p != NULL){
		q = p->next;//q始终保存p的下一个节点
		
		//将p插入到head的后面
		p->next = head->next;
		head->next = p;

		p = q; //将q保存的节点(插入之前p的下一个节点)  赋值给p;
	}
	return;
}
//排序
void linkSort(link_t *head)
{
	if(linkIsEmpty(head)){
		return;
	}

	link_t *p = head->next;
	link_t *r, *q;
	head->next = NULL; // 断开

	
	while(p != NULL){
		q = p->next;//每次保存插入之前的p的后一个节点
		r = head; //每次将r放在头结点,让r的下一个节点的数据和要插入的数据比较确定插入的位置
		while(r->next != NULL && r->next->data < p->data){ //找到要插入的位置
		//如果r后面的节点是空，说明r的后面就是插入的位置;
		//如果r后面的节点不空，并且r的后面的节点的数据小于要插入的数据，说明r应该往后偏移
		//直到r的下一个节点的数据比要插入的数据大，那么就将这个数据（节点）插入到r的后面
			r = r->next; 
		}
		p->next = r->next;
		r->next = p;
		
		p = q;
	}
}

void Joseph(int n, int k, int m)
{
	//创建无头循环链表
	link_t *head = NULL;
	link_t *r = NULL; 

	int i = 0;
	for(i = 1; i <= n; i++){
		link_t *p = (link_t *)malloc(sizeof(link_t));
		p->data = i;

		if(head == NULL){
			head = p; //head指向第一个节点
			r = head; //r作为当前链表的最后一个节点
		}else{
			r->next = p;//将节点插入到r的后面
			r = r->next;//r又作为链表的最后一个节点
		}
	}
	r->next = head; //将最后一个节点指向头节点，变成循环链表
	r = head;//将r重新指向第一个节点，以备下面遍历使用
	/*while(1){
		getchar();
		printf("%d\n", r->data);
		r = r->next;
	}*/

	//确定开始数数的位置
	for(i = 0; i < k -1; i++){
		r = r->next;
	}
	while(r->next != r){
		//开始数数
		for(i = 0; i < m-2; i++){
			r = r->next; //数数的时候将r遍历到要删除节点的前一个位置
		}
		//删除r后面这个节点
		link_t *q = r->next; //保存要删除的节点
		printf("%d ", q->data);
		r->next = q->next; //让要删除节点的前一个节点指向后一个节点
		free(q);//释放空间
		r = r->next; //删除一个节点以后将r指向下一个节点一会儿接着报数
	}
	printf("\nlive: %d\n", r->data);
	free(r);
}

