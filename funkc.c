#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30

int suma(int *a,int n);
float srednja_vr(int *a,int n);
int main()
{
    int a[MAX_SIZE];
    int n = 0;
    int op;
    int i =0;
    printf("Unesite broj elemenata niza :\n");
    scanf("%d",&n);

    printf("Unesi elemente niza \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Unesite opciju 1 za sumu\n opciju 2 za srednju vrednost\n");
    scanf("%d",&op);

    switch(op)
    {
    case 1:
        printf("Suma elemenata niza je :%d\n",suma(a,n));
        break;

    case 2:
        printf("Srednja vrednost elemenata niza je:%f\n",srednja_vr(a,n));
        break;

    default:
        printf("Nije izabrana dobra opcija\n");

    }
    return 0;
}
int suma(int *a,int n){
    int i;
    int sum = 0;
    for(i=0;i<n;i++){
        sum = sum + a[i];
    }
    return sum;
}
float srednja_vr(int *a,int n){
    int i;
    int sum = 0;
    float rez = 0;
    for(i=0;i<n;i++){
        sum = sum + a[i];
    }
    rez = (float)sum / n;
    return rez;
}
