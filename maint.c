#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(int argc, char const *argv[])
{
	/*Tree *tree=joinTree(joinTree(newTree(8), newTree(3), 4),
				newTree(2),
				6);
	*/
	Tree *tree=NULL;
	tree=insert(4, tree);
	tree=insert(5, tree);
	tree=insert(3, tree);
	tree=insert(2, tree);
	tree=insert(1, tree);
	tree=insert(7, tree);
	tree=insert(8, tree);
	tree=insert(9, tree);
	tree=insert(10, tree);
	printTreePrefix(tree);
	printf("\n-------------------%d\n", tree->data);
	printf("length of tree : %d \n", countTree(tree));
	printf("\n-------------------\n");

	
	ClearTree(tree);
	return 0;
}