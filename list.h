#ifndef __LIST__H__
#define __LIST__H__

typedef enum{
	false,
	true
}Bool;

/*-----------------------*/
typedef struct ListE{
	int data;
	struct ListE *next;
}ListE, *List;

/*-----------------------*/
List newList(void);
int listSize(List listName);
Bool isEmptyList(List listName);
void printList(List listName);
List pushBackList(List listName, int data);
List pushHeadList(List listName, int data);
List popLast(List listName);
List popHead(List listName);
List clearList(List listName);
#endif