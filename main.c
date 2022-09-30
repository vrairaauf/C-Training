#include <stdio.h>
#include "queu.h"

int main(int argc, char const *argv[])
{
	/* code */
	if(isEmpty())
		printf("empty queu\n");
	else
		printf("not empty queu\n");
	

	printf("length of queue : %d\n",length());

	printQueu();
	pushQueu(67);
	//printf("head node : %d\n",getHead());
	pushQueu(68);
	pushQueu(69);
	printQueu();
	pop();
	printQueu();

	return 0;
}