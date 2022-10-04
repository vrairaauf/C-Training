#include <stdlib.h>
#include <stdio.h>
#include "list.h"

/*------------------------------*/
List newList(void){
	return NULL;
}

/*------------------------------*/

Bool isEmptyList(List listName){
	if(listName==NULL)
		return true;
	return false;
}

/*------------------------------*/

int listSize(List listName){
	int length=0;
	if(!isEmptyList(listName)){
		while(listName!=NULL){
			length++;
			listName=listName->next;
		}	
	}
	return length;
}

/*-------------------------------*/
void printList(List listName){
	if(isEmptyList(listName)){
		printf("empty list !!!");
		return;
	}
	while(listName!=NULL){
		printf("[%d]\n", listName->data);
		listName=listName->next;
	}
	printf("\n");
}

/*------------------------------*/
List pushBackList(List listName, int data){
	ListE *element;
	element=malloc(sizeof(*element));
	element->data=data;
	element->next=NULL;
	if(isEmptyList(listName))
		return element;
	ListE *tmp;
	tmp=listName;
	while(tmp->next!=NULL)
		tmp=tmp->next;
	tmp->next=element;
	return listName;

}
/*------------------------------*/
List pushHeadList(List listName, int data){
	ListE *element;element=malloc(sizeof(*element));
	if(element==NULL){
		fprintf(stderr, "error dynamique allocation\n");
		exit(EXIT_FAILURE);
	}
	element->data=data;
	element->next=NULL;
	if(isEmptyList(listName))
		return element;
	element->next=listName;
	return element;

}
/*------------------------------*/
List popLast(List listName){
	if(isEmptyList(listName))
		return newList();
	if(listName->next==NULL)
	{
		free(listName);
		listName=NULL;
		return newList();
	}

	ListE *vHead=listName;
	ListE *before=listName;
	while(vHead->next!=NULL){
		before=vHead;
		vHead=vHead->next;
	}
	before->next=NULL;
	free(vHead);
	vHead=NULL;
	return listName;
}

/*---------------------------------------*/
List popHead(List listName){
	if(isEmptyList(listName))
		return newList();
	if(listName->next==NULL){
		free(listName);
		listName=NULL;
		return newList();
	}
	ListE *vHead;
	vHead=malloc(sizeof(*vHead));
	if(vHead==NULL){
		fprintf(stderr, "allocation memory error\n");
		exit(EXIT_FAILURE);
	}
	vHead=listName->next;
	free(listName);
	listName=NULL;
	return vHead;
}
/*---------------------------*/
List clearList(List listName){
	if(isEmptyList(listName))
		return newList();
	while(listName != NULL)
		listName=popHead(listName);
	return newList();
}
/*----------------------------*/
List insertIntoPosition(List listName, int position, int data){
	if(isEmptyList(listName))
	{
		printf("empty list impossible !!\n");
		return newList();
	}
	if(listSize(listName)<position){
		printf("%d out of bound\n", position);
		return listName;
	}
	position--;
	int index=0;
	ListE *element=malloc(sizeof(*element));
	List vHead=listName;
	element->data=data;
	element->next=NULL;
	while(index!=position-1){
		vHead=vHead->next;
		index++;
	}
	element->next=vHead->next;
	vHead->next=element;
	return listName;
}
/*----------------------------*/
Bool compareLists(List list1, List list2){
	if(isEmptyList(list1) && isEmptyList(list2))
		return true;
	else if(isEmptyList(list1) && !isEmptyList(list2) || !isEmptyList(list1) && isEmptyList(list2))
		return false;
	if(listSize(list1)!=listSize(list2))
		return false;
	List vHead1=list1;
	List vHead2=list2;
	while(vHead1!=NULL && vHead2!=NULL){
		if(vHead1->data==vHead2->data){
			vHead1=vHead1->next;
			vHead2=vHead2->next;
		}else{
			return false;
		}
	}
	return true;

}
/*----------------------------*/
