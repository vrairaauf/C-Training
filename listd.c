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
ListD insert(ListD listName, int data, int position){
	if(isEmptyList(listName))
	{
		printf("empty list\n");
		return newList();
	}
	if(listName->size>=position){
		/*----------*/
		/* initialize a new node */
		ListNode *node;
		node=malloc(sizeof(*node));
		if(node==NULL){
			fprintf(stderr, "allocation error\n");
			exit(EXIT_FAILURE);
		}
		node->data=data;
		node->next=NULL;
		node->previous=NULL;
		/*----------*/
		int center=listName->size/2 +1;
		if(position<=center){
			ListNode *start=listName->head;
			int index=1;
			while(index<position-1){
				start=start->next;
				index++;
			}
			node->next=start->next;
			node->previous=start;
			start->next->previous=node;
			start->next=node;
			return listName;
		}else{
			ListNode *end=listName->tail;
			int index=1;
			while(index<=listName->size-position+1){
				end=end->previous;
				index++;
			}
			node->next=end;
			node->previous=end->previous;
			end->previous->next=node;
			end->previous=node;
			return listName;
		}

	}else{
		printf("position out of bound\n");
		exit(EXIT_FAILURE);
	}
}
/*----------------------------*/
Bool compare(ListD list1, ListD list2){
	if(isEmptyList(list1) && isEmptyList(list2))
		return true;
	if(!isEmptyList(list1) && isEmptyList(list2) || isEmptyList(list1) && !isEmptyList(list2))
		return false;
	if(listDSize(list1)!=listDSize(list2))
		return false;
	ListNode *startFirstList=list1->head;
	ListNode *endFirstList=list1->tail;

	ListNode *startSecondList=list2->head;
	ListNode *endSecondList=list2->tail;

	while(startFirstList!=endFirstList){
		if(startFirstList->data==startSecondList->data && endFirstList->data==endSecondList->data){
			startFirstList=startFirstList->next;
			startSecondList=startSecondList->next;
			endFirstList=endFirstList->previous;
			endSecondList=endSecondList->previous;
		}else 
			return false;
	}
	return true;
}
/*------------------------*/