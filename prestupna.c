#include <stdio.h>
#include <stdlib.h>
void prestupna(int godina1,int godina2);
int main()
{
    int n = 1990;
    int m = 2021;
    prestupna(n,m);
    return 0;
}
void prestupna(int godina1,int godina2){
    int i;
    for(i=godina1;i<=godina2;i++){
        if(i%4 == 0 && i%100 != 0)
            printf("Godina %d je prestupna\n",i);
    }

}
