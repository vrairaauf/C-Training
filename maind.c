#include <stdio.h>
#include <stdlib.h>
#include "listd.h"

int main(int argc, char const *argv[])
{
	ListD list=newList();
	
	list=pushHeadNode(list, 56);
	list=pushHeadNode(list, 57);
	list=pushHeadNode(list, 59);
	list=pushHeadNode(list, 60);
	
	list=popTail(list);
	list=popTail(list);
	//list=popTail(list);
	//list=popTail(list);
	if(isEmptyList(list))
		printf("empty list !!");
	printList(list);
	return 0;
}