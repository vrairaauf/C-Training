#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(int argc, char const *argv[])
{
	Tree *tree=joinTree(joinTree(newTree(8), newTree(3), 4),
				newTree(2),
				6);
	printf("\n-------------------\n");
	printf("length of tree : %d \n", countTree(tree));
	printf("\n-------------------\n");
	printTreePrefix(tree);

	printf("\n-------------------\n");
	printTreePostfix(tree);
	printf("\n-------------------\n");
	ClearTree(tree);
	return 0;
}