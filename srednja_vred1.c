#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
int main()
{
    int a[MAX_SIZE];
    int n = 5;
    int i;
    int sr = 0;
    int sum = 0;
    int index = 0;
    for(i=0;i<n;i++){
        a[i] = 0;
    }
    printf("Unesi elemente niza \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        sum = sum + a[i];
    sr = sum/n;
    int min = 100;
    for(i=0;i<n;i++){
        int tmp = 0;
        tmp = sr - a[i];
        if(tmp < min && tmp >= 0){
            min = tmp;
            index = i;
        }
    }
    printf("Najblizi broj je %d\n",a[index]);
    return 0;
}
