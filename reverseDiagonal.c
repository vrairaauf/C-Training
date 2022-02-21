#include <stdio.h>
#include <stdlib.h>
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sommeDiagonal1=0, sommeDiagonal2=0, cmpl, coloneInverse=arr_columns-1;
    if (arr_rows == arr_columns){
    for(cmpl=0; cmpl<arr_rows; cmpl++){
        sommeDiagonal1+=arr[cmpl][cmpl];
        sommeDiagonal2+=arr[cmpl][coloneInverse];
        coloneInverse--;
    }
     return abs(sommeDiagonal1-sommeDiagonal2);
    }else{
        return 0;
    }
   
}
int main(int argc, char const *argv[])
{
    int **matEntier, n, l,c, diagonal;
    printf("Taper le nombre de ligne est de colonne de matrice\n");
    scanf("%d", &n);
    matEntier=(int **)malloc(n*sizeof(int *));
    for(l=0; l<n;l++)
        matEntier[l]=(int *) malloc(n*sizeof(int));
    for(l=0; l<n; l++)
        for(c=0;c<n; c++)
            scanf("%d", &matEntier[l][c]);
    diagonal=diagonalDifference(n, n, &*matEntier);
    printf("%d\n", diagonal);
    return 0;
}