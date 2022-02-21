#include <stdio.h>
#include <stdlib.h>
void staircase(int n) {
    int cmpl, cmpc, debut=n-2;
    for(cmpl=0; cmpl<n; cmpl++){
        for(cmpc=0;cmpc<=debut; cmpc++)
            printf(" ");
        for(cmpc=debut+1; cmpc<n; cmpc++)
            printf("#");
        printf("\n");
        debut--;
    }
}
int main(int argc, char const *argv[])
{
	int n=5;
	staircase(n);
	return 0;
}