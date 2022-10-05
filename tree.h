#ifndef __TREE__H__
#define __TREE__H__

typedef struct Tree{
	int data;
	struct Tree *LeftTree;
	struct Tree *RightTree;
	struct Tree *ParentTree;
}Tree;

/*--------------------------------*/
Tree *newTree(int data);
void ClearTree(Tree *treeName);
Tree *joinTree(Tree *left, Tree *right, int data);
void printTreePrefix(Tree *treeName);
void printTreePostfix(Tree *treeName);
int countTree(Tree *treeName);
Tree *insert(int data, Tree *treeName);
#endif