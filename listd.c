#include <stdio.h>
#include <stdlib.h>
#include "listd.h"

ListD newList(void){return NULL;}
/*---------------------*/
Bool isEmptyList(ListD listName){
	if(listName==NULL)
		return true;
	return false;
}
/*-------------------------*/
int listDSize(ListD listName){
	if(isEmptyList(listName)){
		return 0;
	}
	return listName->size;
}
/*---------------------------*/
ListD pushHeadNode(ListD listName, int data){
	ListNode *node;
	node=malloc(sizeof(*node));
	if(node==NULL){
		fprintf(stderr, "allocation error\n");
		exit(EXIT_FAILURE);
	}
	node->data=data;
	node->next=NULL;
	node->previous=NULL;
	if(isEmptyList(listName)){
		listName=malloc(sizeof(*listName));
		if(listName==NULL){
			fprintf(stderr, "allocation error for list\n");
			exit(EXIT_FAILURE);
		}
		listName->size=0;
		listName->head=node;
		listName->tail=node;
	}else{
		listName->head->previous=node;
		node->next=listName->head;
		listName->head=node;
	}
	listName->size++;
	return listName;
}
/*-------------------------*/
ListD pushTailNode(ListD listName, int data){
	ListNode *node;
	node=malloc(sizeof(*node));
	if(node==NULL){
		fprintf(stderr, "allocation error\n");
		exit(EXIT_FAILURE);
	}
	node->data=data;
	node->next=NULL;
	node->previous=NULL;
	if(isEmptyList(listName)){
		listName=malloc(sizeof(*listName));
		if(listName==NULL){
			fprintf(stderr, "allocation error for list\n");
			exit(EXIT_FAILURE);
		}
		listName->size=0;
		listName->head=node;
		listName->tail=node;
	}else{
		listName->tail->next=node;
		node->previous=listName->tail;
		listName->tail=node;
	}
	listName->size++;
	return listName;
}
/*-------------------------*/
void printList(ListD listName){
	if(isEmptyList(listName))
	{
		printf("empty list !!!");
		return;
	}
	ListNode *vHead=listName->head;
	while(vHead!=NULL){
		printf("%d\n", vHead->data);
		vHead=vHead->next;
	}
	printf("\n");
}
/*------------------------*/
ListD popHead(ListD listName){
	if(isEmptyList(listName))
	{
		printf("empty list\n");
		return newList();
	}
	if(listName->size==1){
		free(listName);
		listName=NULL;
		return newList();
	}
	ListNode *node=listName->head;
	listName->head=listName->head->next;
	listName->head->previous=NULL;
	listName->size--;
	node->next=NULL;
	node->previous=NULL;
	free(node);
	node=NULL;
	return listName;
}
/*-----------------------------*/
ListD popTail(ListD listName){
	if(isEmptyList(listName))
	{
		printf("empty list\n");
		return newList();
	}
	if(listName->size==1){
		free(listName);
		listName=NULL;
		return newList();
	}

	ListNode *node=listName->tail;

	listName->tail=listName->tail->previous;
	listName->tail->next=NULL;

	listName->size--;

	node->next=NULL;
	node->previous=NULL;
	free(node);
	node=NULL;
	return listName;
}
/*------------------------------*/