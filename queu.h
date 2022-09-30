#ifndef __QUEU__H__
#define __QUEU__H__

typedef enum {
	false,
	true
}Bool;

/*--------------*/
typedef struct Node
{
	int data;
	struct Node *next;
}Node, *nextNode;

/*---------------*/
static Node *head=NULL;
static Node *tail=NULL;
static int len=0;
/*----------------*/

Bool isEmpty(void);
int length(void);
int getHead(void);
int getTail(void);
void printQueu(void);
void pushQueu(int data);
void pop(void);
#endif