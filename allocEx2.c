#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int nl, nc, cmpl,cmpc;
	int **matEntier;
	printf("Taper le nombre de ligne est le nombre de colonne \t:\n");
	scanf("%d/%d", &nl, &nc);
	matEntier = (int **) malloc(nl*sizeof(int *));
	for(cmpl=0; cmpl<nl;cmpl++)
		matEntier[cmpl]=(int *) malloc(nc*sizeof(int));
	
	//En va maintenant remplir le tableaux
	for(cmpl=0; cmpl<nl; cmpl++)
		for(cmpc=0;cmpc<nc; cmpc++)
			scanf("%d", &matEntier[cmpl][cmpc]);
	//en va maintenant affciher le atbleaux
	for(cmpl=0; cmpl<nl;cmpl++){
		printf("\n");
		for(cmpc=0;cmpc<nc; cmpc++)
			printf("%d\t", matEntier[cmpl][cmpc]);
	}
	system("pause");
	free(matEntier);
	return 0;
}
