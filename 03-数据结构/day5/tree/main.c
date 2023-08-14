/*===============================================================
*   Copyright (C) 2023 All rights reserved.
*   
*   文件名称：main.c
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

int main()
{
	tree_t *root = treeCreate(7, 1);
	if(root == NULL){
		return -1;
	}
	printf("create success.....\n");

	printf("%d\n",root->lchild->rchild->data);

	pre_traversal(root);
	puts("");
	mid_traversal(root);
	puts("");
	sub_traversal(root);
	puts("");

	level_traversal(root);

}	
