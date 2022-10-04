#include <stdlib.h>
#include <stdio.h>
#include "list.h"
int main(int argc, char const *argv[])
{
	List list1=newList();
	list1=pushHeadList(list1, 56);
	list1=pushHeadList(list1, 52);
	list1=pushHeadList(list1, 53);
	list1=pushHeadList(list1, 54);
	list1=insertIntoPosition(list1, 2, 57);

	List list2=newList();
	list2=pushHeadList(list2, 56);
	list2=pushHeadList(list2, 52);
	list2=pushHeadList(list2, 53);
	list2=pushHeadList(list2, 54);
	list2=insertIntoPosition(list2, 2, 57);

	printf("size of list1 : %d \n", listSize(list2));
	printList(list2);
	printf("\n--------------------\n");
	list2=reverse(list2);
	printList(list2);
	//list1=popLast(list1);
	//list1=popHead(list1);
	//printList(list1);
	if(compareLists(list1, list2))
		printf("equals\n");

	return 0;
}