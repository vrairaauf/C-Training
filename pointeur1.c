#include <stdio.h>
#include <stdlib.h>
int main(void){
	return 0;
}
/*

int nextMultiple(int n){
    int roule=1, resultat, cmp=n;
    while(roule==1){
        resultat=cmp%5;
        if(resultat==0)
          roule=0;   
        else
            cmp++;  
    }
     return cmp;
}

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int cmp, nextMultipleDeCinq;
    *result_count=grades_count;
    static int nouveauGrade[100];
        for(cmp=0; cmp<grades_count; cmp++){
            if(grades[cmp]>37){
                nextMultipleDeCinq=nextMultiple(grades[cmp]);
                if( nextMultipleDeCinq-grades[cmp]<3 )
                    nouveauGrade[cmp]=nextMultipleDeCinq;
                else
                    nouveauGrade[cmp]=grades[cmp];
                
            }else
                nouveauGrade[cmp]=grades[cmp];
            
        }
        return nouveauGrade;
    
}
_______________________________
char* kangaroo(int x1, int v1, int x2, int v2) {
    int firstKanguru, secondKenguru;
    int theSame=-1, intervalle;
    static char res[10];
    if(x1<x2 && x1>=0 && x2<=10000 && v1>=1 && v1<=10000 && v2>=1 && v2<=10000){
        intervalle=x1;
        
        while(theSame==-1 && intervalle<=10000){
            firstKanguru=x1+v1;
            secondKenguru=x2+v2;
            if(firstKanguru==secondKenguru){
                theSame=1;
                break;
            }else if(firstKanguru>secondKenguru)
                intervalle+=firstKanguru;
            else 
                intervalle+=secondKenguru;
            x1=firstKanguru;
            x2=secondKenguru;
        }
        if(theSame==-1)
            strcpy(res, "NO");
        else
            strcpy(res, "YES");
    
    }else{
        strcpy(res, "NO");
    }
    return res;
}

*/