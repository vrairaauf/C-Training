#include <stdlib.h>
#include <stdio.h>
#include "list.h"
int main(int argc, char const *argv[])
{
	List list1=newList();
	list1=pushBackList(list1, 56);
	list1=pushHeadList(list1, 52);
	printf("size of list1 : %d \n", listSize(list1));
	printList(list1);
	//list1=popLast(list1);
	list1=popHead(list1);
	printList(list1);
	

	return 0;
}