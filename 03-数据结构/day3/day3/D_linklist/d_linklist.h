/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：d_linklist.h
*   创 建 者：JiangCX
*   创建日期：2023年08月12日
*   描    述：
*
*   更新日志：
*
================================================================*/
#ifndef _D_LINKLIST_H
#define _D_LINKLIST_H

typedef int data_t;
typedef struct Node{
   data_t data;
  struct Node *next;
  struct Node *prior;
}link_t;

link_t *D_linkCreate();
int D_linkGetLength(link_t *head);
int D_linkIsEmpty(link_t *head);
int D_linkInsertPos(link_t *head, int pos, data_t data);
void D_linkShow(link_t *head);
int D_linkDeletePos(link_t *head, int pos);

#endif
