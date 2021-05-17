#include <stdio.h>
#include <stdlib.h>
void dec_to_bin(int broj);
int main()
{
    int a,b,c;
    do{
        printf("Unesite ceo pozitivan broj a:\n");
        scanf("%d",&a);
        printf("Unesite ceo pozitivan broj b:\n");
        scanf("%d",&b);
    }while(a < 0 || b < 0 );
    dec_to_bin(a);
    printf("\n");
    dec_to_bin(b);
    printf("\n");

    printf("Komplement od a je:\n");
    dec_to_bin(~a);

    printf("\n\nLogicko I od a i b je:\n");
    dec_to_bin(a & b);

    printf("\n\nLogicko ILI od a i b je:\n");
    dec_to_bin(a | b);
    return 0;
}
void dec_to_bin(int broj){
    int i;
    for(i=1;i<=16;i++){
        printf("%d", (broj & 0x8000) != 0);
        broj = broj << 1;
        if(i%4 == 0)
            printf(" ");
    }

}
