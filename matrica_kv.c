#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30
int main()
{
    int i,j;
    int n = 2;
    int a[MAX_SIZE][MAX_SIZE];
    int b[MAX_SIZE][MAX_SIZE];
    int c[MAX_SIZE][MAX_SIZE];
    printf("Unesite matricu a[][]\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d] = \n",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    printf("Unesite matricu b[][]\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("b[%d][%d] = \n",i,j);
            scanf("%d",&b[i][j]);
        }

    }
    printf("Racunanje zbira \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }

    }
    printf("Rezultat je : \n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\n",c[i][j]);
        }

    }
    return 0;
}
