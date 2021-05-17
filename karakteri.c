#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 80
int main()
{
   char C[MAX_SIZE]; //originalan niz
   char A[MAX_SIZE]; //Samo slova iz A
   int i;
   int n = 6;
   for(i=0;i<MAX_SIZE;i++){
        C[i] = 0;
        A[i] = 0;
    }
    for(i=0;i<n;i++){
        printf("Unesite C[%d]= \n",i);
        scanf(" %c",&C[i]);
    }
    int m = 0;
    for(i=0;i<n;i++){
        if((C[i] >= 'A' && C[i] <= 'Z') || (C[i] >= 'a' && C[i] <= 'z')) {
            A[m] = C[i];
            m++;
        }
    }
    for(i=0;i<m;i++)
        printf("A[%d] = %c\n",i,A[i]);
    return 0;
}
