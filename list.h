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
List insertIntoPosition(List listName, int position, int data);
Bool compareLists(List list1, List list2);
int size(List listName);
List reverse(List listName);
List sort(List listName);
Bool exist(List listName, int data);
Bool isSortedDescList(List listName);
Bool isSortedAscList(List listName);
char sortedDirection(List listName);
#endif