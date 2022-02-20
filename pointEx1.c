#include <stdio.h>
#include <stdlib.h>
void chercherVal(int tab[], int n, int A, int *POS, int *NB_OCC){
	int cmp;
	for(cmp=0; cmp<n; cmp++){
		if(tab[cmp]==A){
			*POS=cmp;
			*NB_OCC++;
		}
	}
}
int main(int argc, char const *argv[])
{
	int tabEntier[10]={1, 7, 5, 77, 9, 10};
	int n, A, pos=-1, occurance=1;
	//POS :contient la dernier position de A si a nexiste pas alors pos est egale a -1
	//NB_OCC : contient le nombre d'occurance de A dans le tableau
	//n : la longueur du tableau
	chercherVal(tabEntier, 6, 78, &pos, &occurance);
	if(pos != -1){
		printf("denier position de %d \t:\t %d\n",A, pos+1 );
		printf("nombre d'occurance de %d \t:\t %d\n", A, occurance);
	}else
		printf("Cette entier n'existe pas dans le tableaux\n");
	return 0;
}