#include <stdio.h>
#include <stdlib.h>

void plusMinus(int arr_count, int* arr) {
    int cmpNegativeElements=0,cmpNullElements=0, cmpPositiveElements=0, cmp;
     for(cmp=0; cmp<arr_count; cmp++){
         if (arr[cmp]<0){
             cmpNegativeElements+=1;
         }else if(arr[cmp]==0){
             cmpNullElements+=1;
         }else{
             cmpPositiveElements+=1;
         }
     }
     printf("%.6f \n", (float) cmpPositiveElements / arr_count);
     printf("%.6f \n", (float) cmpNegativeElements / arr_count);
     printf("%.6f \n", (float) cmpNullElements / arr_count);
     
}
int main(int argc, char const *argv[])
{
    int longueurTab, *tab, i;
    printf("Taper la longueur du tableaux\n");
    scanf("%d", &longueurTab);
    tab=malloc(longueurTab*sizeof(int));
    //remplissage du tableaux
    for(i=0; i<longueurTab; i++){
        printf("taper un valeur\n");
        scanf("%d", &tab[i]);

    }
    //affichage du tableaux
    for(i=0; i<longueurTab; i++)
        printf("%d \n", tab[i]);
        

    plusMinus(longueurTab, tab);

    return 0;
}
