/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：tree.h
*   创 建 者：JiangCX
*   创建日期：2023年08月15日
*   描    述：
*
*   更新日志：
*
================================================================*/
#ifndef _TREE_H
#define _TREE_H

typedef int data1_t;

typedef struct Tree{
	data1_t data;
	struct Tree *lchild;
	struct Tree *rchild;
}tree_t;

tree_t *treeCreate(int n, int i);
void pre_traversal(tree_t *root);
void mid_traversal(tree_t *root);
void sub_traversal(tree_t *root);
void level_traversal(tree_t *root);

#endif
