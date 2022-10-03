#ifndef __LISTD__H__
#define __LISTD__H__

typedef enum{
	false,
	true
}Bool;

typedef struct ListNode{
	int data;
	struct ListNode *next;
	struct ListNode *previous; 
}ListNode;
typedef struct ListD{
	int size;
	struct ListNode *head;
	struct ListNode *tail;
}*ListD;


/*-------------------------*/

ListD newList(void);
Bool isEmptyList(ListD listName);
int listDSize(ListD listName);
ListD pushHeadNode(ListD listName, int data);
ListD pushTailNode(ListD listName, int data);
void printList(ListD listName);
ListD popHead(ListD listName);
ListD popTail(ListD listName);
#endif