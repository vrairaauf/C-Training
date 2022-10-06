#include <stdlib.h>
#include <stdio.h>
#include "list.h"
int main(int argc, char const *argv[])
{
	List list1=newList();
	list1=pushHeadList(list1, 56);
	list1=pushHeadList(list1, 57);
	//list1=pushHeadList(list1, 58);
	
	//list1=insertIntoPosition(list1, 2, 57);
	printList(list1);
	//list1=sort(list1);
	printf("\n---------------\n");
	
	/*
	List list2=newList();
	list2=pushHeadList(list2, 56);
	list2=pushHeadList(list2, 52);
	list2=pushHeadList(list2, 53);
	list2=pushHeadList(list2, 54);
	list2=insertIntoPosition(list2, 2, 57);
	*/
	//printf("size of list1 : %d \n", listSize(list2));
	//printList(list2);
	//printf("\n--------------------\n");
	//list2=reverse(list2);
	//printList(list2);
	//list1=popLast(list1);
	//list1=popHead(list1);
	//printList(list1);
	/*if(compareLists(list1, list2))
		printf("equals\n");
		*/
	if(exist(list1, 85))
		printf("exist\n");
	if(isSortedDescList(list1))
		printf("sorted\n");
	if (sortedDirection(list1)=='A')
		printf("ASC direction\n");
	else
		printf("DESC direction\n");
	return 0;
}