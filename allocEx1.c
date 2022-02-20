#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n, cmp=0;
	int *tabEntier;
	printf("Taper la longueur du tableaux :\n");
	scanf("%d", &n);
	tabEntier=(int *)malloc(sizeof(int)*n);
	//remplir le tableaux
	for(cmp=0;cmp<n; cmp++){
		printf("Taper la valeur d la case %d\n", cmp);
		scanf("%d", tabEntier+cmp);
		printf("Valeur est unserer\n");
	}
	//affiche le tableaux
	for(cmp=0; cmp<n;cmp++)
		printf("La case numero %d Contient la valeur %d\n",cmp+1, *tabEntier+cmp);
	free(tabEntier);
	return 0;
}