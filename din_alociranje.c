#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *niz;
    int n;
    int max;
    printf("Unesite velicinu niza\n");
    scanf("%d",&n);
    niz = (int*) malloc(n*sizeof(int));
    if(niz == NULL){
        printf("Greska,nema dovoljno memorije\n");
        return 1;
    }
    printf("Hello world!\n");
    max = niz[0];
    int i;
    for(i=1;i<n;i++){
        if(niz[i] > max)
            max = niz[i];
    }
    printf("Max je %d",max);
    return 0;
}
