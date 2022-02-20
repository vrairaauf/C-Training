#include <stdio.h>
#include <stdlib.h>
void supprimer_null(int tab[], int *n){
	int cmp, cmp1;
	int l=*n, nbElementNull=0;
	for(cmp=0; cmp<l; cmp++){
		if(tab[cmp]==0){
			for(cmp1=cmp; cmp1<l-1; cmp1++)
				tab[cmp1]=tab[cmp1+1];
			//tab[l-1]=0;
			cmp--;
			nbElementNull++;
		}
	}
	*n-=nbElementNull;
	for(cmp=*n;cmp<l;cmp++)
		tab[cmp]=0;
}
int main(int argc, char const *argv[])
{
	int tabEntier[10]={1, 0, 0, 6, 8, 9, 0, 8}, lt=8;
	int *PD;
	PD=tabEntier;
	printf("Avant traitement\n");
	for(;PD<tabEntier+lt; PD++)
		printf("%d \n", *PD);
	supprimer_null(tabEntier, &lt);
	printf("apres traitement\n");
	for(PD=tabEntier;PD<tabEntier+lt; PD++)
		printf("%d \n", *PD);

	return 0;
}