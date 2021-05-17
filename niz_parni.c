#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 25
int main()
{
    int x[MAX_SIZE];
    int A[MAX_SIZE]; //parni
    int B[MAX_SIZE];    //neparni
    int n = 7;
    int i;

    for(i=0;i<MAX_SIZE;i++){
        x[i] = 0;
        A[i] = 0;
        B[i] = 0;
    }
    for(i=0;i<n;i++){
        printf("Unesite x[%d]= \n",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]%2 == 0)
            A[i] = x[i];
    }
    for(i=0;i<n;i++){
        if(x[i] < 0)
            B[i] = x[i];
    }

    printf("Niz A:\n");
    for(i=0;i<n;i++){
        printf("%d\n",A[i]);
    }

    printf("Niz B:\n");
    for(i=0;i<n;i++){
        printf("%d\n",B[i]);
    }
    return 0;
}
