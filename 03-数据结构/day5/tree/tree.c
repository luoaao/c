/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：tree.c
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

#include "tree.h"
#include "link_queue.h"

tree_t *treeCreate(int n, int i)
{
	tree_t *root = (tree_t *)malloc(sizeof(tree_t));
	root->data = i;

	if(2*i <= n){
		root->lchild = treeCreate(n, 2*i);
	}else{
		root->lchild = NULL;
	}

	if(2*i+1 <= n){
		root->rchild = treeCreate(n, 2*i+1);
	}else{
		root->rchild = NULL;
	}
	return root;
}

void pre_traversal(tree_t *root)
{
	if(root == NULL){
		return;
	}
	printf("%d ", root->data);
	pre_traversal(root->lchild);
	pre_traversal(root->rchild);

}
void mid_traversal(tree_t *root)
{
	if(root == NULL){
		return;
	}
	pre_traversal(root->lchild);
	printf("%d ", root->data);
	pre_traversal(root->rchild);

}
void sub_traversal(tree_t *root)
{
	if(root == NULL){
		return;
	}
	pre_traversal(root->lchild);
	pre_traversal(root->rchild);
	printf("%d ", root->data);

}

void level_traversal(tree_t *root)
{	
	if(root == NULL){
		return;
	}
	lqueue_t *queue = lqueueCreate();
	if(queue == NULL){
		return;
	}
	while(root != NULL){
		printf("%d ", root->data);
		
		if(root->lchild != NULL){
			lqueue_En(queue, root->lchild);
		}
		if(root->rchild != NULL){
			lqueue_En(queue, root->rchild);
		}
		root = lqueue_De(queue);
	}
	puts(" ");
}
