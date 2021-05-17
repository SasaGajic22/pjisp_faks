#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int provera(char *str,char k);
int main()
{
    char *str[20];
    char karakter;
    printf("Unesite zeljeni string\n");
    scanf("%s", str);

    printf("Unesite zeljeni karakter\n");
    scanf(" %c", &karakter);
    printf("Broj pojavljivanja karaktera %c u stringu %s je %d puta\n",karakter,str,provera(str,karakter));

    return 0;
}
int provera(char *str,char k){
    int len,i;
    int br = 0;
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i] == k)
            br++;
    }
    return br;
}
