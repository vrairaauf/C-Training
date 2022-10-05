#include <stdio.h>
#include <stdlib.h>
#include "listd.h"

int main(int argc, char const *argv[])
{
	ListD list=newList();
	
	list=pushHeadNode(list, 56);
	list=pushHeadNode(list, 57);
	list=pushHeadNode(list, 58);
	list=pushHeadNode(list, 59);
	list=pushHeadNode(list, 60);
	list=pushHeadNode(list, 61);
	list=pushHeadNode(list, 63);
	list=insert(list, 62, 2);
	list=insert(list, 70, 6);

	ListD list1=newList();
	
	list1=pushHeadNode(list1, 56);
	list1=pushHeadNode(list1, 57);
	list1=pushHeadNode(list1, 58);
	list1=pushHeadNode(list1, 59);
	list1=pushHeadNode(list1, 60);
	list1=pushHeadNode(list1, 61);
	list1=pushHeadNode(list1, 63);
	list1=insert(list1, 62, 2);
	list1=insert(list1, 701, 6);
	//list=popTail(list);
	//list=popTail(list);
	//list=popTail(list);
	//list=popTail(list);
	if(isEmptyList(list))
		printf("empty list !!");
	printList(list);
	printf("\n--------------------\n");
	printList(list1);

	if(compare(list, list1))
		printf("equals\n");
	else
		printf("not equals\n");
	return 0;
}