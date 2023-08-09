/*===============================================================
 *   Copyright (C) 2023 All rights reserved.
 *   
 *   文件名称：struct.c
 *   创 建 者：JiangCX
 *   创建日期：2023年08月09日
 *   描    述：
 *
 *   更新日志：
 *
 ================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

typedef struct{
	char name[32];
	int id;
	char sex;
}stu_t;

int main(){
	stu_t stu1;
	stu_t *p = &stu1;
	strcpy(p->name, "Tom");
	p->id = 1;
	p->sex = 'B';


	stu_t *q = (stu_t *)malloc(sizeof(stu_t));
	if(q == NULL){
		printf("malloc failed....\n");
		return -1;
	}
	strcpy(q->name, "xiaoming");
	q->id = 2;
	q->sex = 'B';

	printf("name: %s\n", p->name);
	printf("id: %d\n", p->id);
	printf("sex: %c\n", p->sex);
	
	printf("name: %s\n", q->name);
	printf("id: %d\n", q->id);
	printf("sex: %c\n", q->sex);

	free(q);
	q = NULL;
}
