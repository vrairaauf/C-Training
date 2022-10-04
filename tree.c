#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
/*-----------------------*/
Tree *newTree(int data){
	Tree *tree;
	tree=malloc(sizeof(*tree));
	if(tree==NULL){
		fprintf(stderr, "allocatino error\n");
		exit(EXIT_FAILURE);
	}
	tree->data=data;
	tree->LeftTree=NULL;
	tree->RightTree=NULL;
	tree->ParentTree=NULL;
	printf("ins : %d\n", tree->data);
	return tree;
}
/*--------------------------*/
void ClearTree(Tree *treeName){
	if(treeName==NULL)
		return;
	printf("sup : %d\n",treeName->data);
	ClearTree(treeName->LeftTree);
	ClearTree(treeName->RightTree);

	free(treeName);

}
/*-----------------------------*/
Tree *joinTree(Tree *left, Tree *right, int data){
	Tree *tr=newTree(data);
	tr->LeftTree=left;
	tr->RightTree=right;
	if(left!=NULL)
		left->ParentTree=tr;
	if(right!=NULL)
		right->ParentTree=tr;
	return tr;
}
/*-------------------------------*/
void printTreePrefix(Tree *treeName){
	if(treeName==NULL)
		return;
	if(treeName->ParentTree==NULL)
		printf("(%d)\n", treeName->data);
	else
		printf("(%d) -> (%d)\n",treeName->ParentTree->data, treeName->data);

	if(treeName->LeftTree!=NULL)
		printTreePrefix(treeName->LeftTree);
	if(treeName->RightTree!=NULL)
		printTreePrefix(treeName->RightTree);
}
/*---------------------------------*/
void printTreePostfix(Tree *treeName){
	if(treeName==NULL)
		return;
	if(treeName->ParentTree==NULL)
		printf("(%d)\n", treeName->data);
	else
		printf("(%d) -> (%d)\n",treeName->ParentTree->data, treeName->data);
	if(treeName->RightTree!=NULL)
		printTreePrefix(treeName->RightTree);
	if(treeName->LeftTree!=NULL)
		printTreePrefix(treeName->LeftTree);
}
/*---------------------------*/
int countTree(Tree *treeName){
	if(treeName==NULL)
		return 0;
	return (countTree(treeName->LeftTree)+ countTree(treeName->RightTree)+1);
}