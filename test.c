#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
typedef int data1_t;

typedef struct Tree{
	data1_t data;
	struct Tree *lchild;
	struct Tree *rchild;
}tree_t;

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

int main()
{
	tree_t *root = treeCreate(7, 1);
	if(root == NULL){
		return -1;
	}
	printf("create success.....\n");\
	return 0;
}