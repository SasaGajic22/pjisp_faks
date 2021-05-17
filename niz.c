#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30
int main()
{
    int niz[MAX_SIZE];
    int i;
    int n;
    int sum = 0;
    int br = 0;
    do {
    printf("Unesite zeljeni broj elemenata niza :\n");
    scanf("%d",&n);
    }while(n <= 0 || n > MAX_SIZE);
    for(i=0;i<MAX_SIZE;i++)
        niz[i] = 0;
    for(i=0;i<n;i++){
        printf("Unesite niz[%d]= \n",i);
        scanf("%d",&niz[i]);
    }

    printf("Unesite broj br = \n");
    scanf("%d",&br);

    for(i=0;i<n;i++){
        printf("%d\n",niz[i]);
    }
    printf("*********************************\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",niz[i]);
    }

    printf("Funkcija koja proverava broj pojavljivanja broja br u nizu\n");
    for(i=0;i<n;i++){
        if(niz[i] == br)
            sum++;
    }
    printf("Broj pojavljivanja je :%d\n",sum);
    return 0;
}
