#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tecnost_galon = 0;
    float tecnost_litre = 0;

    printf("Unesite kolicinu tecnosti u galonima \n");
    scanf("%f",&tecnost_galon);

    tecnost_litre = tecnost_galon * 4.54;
    printf("Kolicina tecnosti u litrama je : %5.2f \n",tecnost_litre);
    return 0;
}
