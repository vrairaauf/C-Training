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
*/