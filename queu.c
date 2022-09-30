#include <stdio.h>
#include <stdlib.h>
#include "queu.h"


Bool isEmpty(void){
	if(head==NULL && tail==NULL)
		return true;
	return false;
}


int length(void){
	return len;
}

int getHead(void){
	if(isEmpty())
		exit(1);
	return head->data;
}

int getTail(void){
	if(isEmpty())
		exit(1);
	return tail->data;
}

void printQueu(void){
	if(isEmpty()){
		printf("empty queu !!!\n");
		return;
	}
	Node *vHead=head;
	while(vHead!=NULL){
		printf("[%d]\n", vHead->data);
		vHead=vHead->next;
	}
	printf("\n");
}

void pushQueu(int data){
	Node *element;
	element=malloc(sizeof(*element));
	if(element==NULL){
		fprintf(stderr, "allocation dynamique error\n");
		exit(EXIT_FAILURE);
	}

	element->data=data;
	element->next=NULL;

	if(isEmpty()){
		head=element;
		tail=element;
	}else{
		tail->next=element;
		tail=element;
	}
	len++;
}


void pop(void){
	if(isEmpty()){
		printf("empty !!!\n");
		return;
	}

	Node *vHead=head;
	if(head==tail){
		head=NULL;
		tail=NULL;
	}
	else
		head=head->next;
	free(vHead);
	len--;
}