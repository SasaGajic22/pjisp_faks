#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ispis(char *str,int len);
int provera(char *str,int duzina);
int main()
{
    char str[10];
    printf("Unesite string\n");
    scanf("%s", str);
    int len;
    len = strlen(str);
    if(provera(str,len)){
        printf("String %s je palindorm\n",str);
    }
    else{
        printf("String %s nije palindrom\n",str);
    }

    return 0;
}
void ispis(char *str,int len){
    int i;
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
}
int provera(char *str,int duzina){
    int i;
    for(i=0;i<duzina;i++){
        if(str[i]!=str[duzina-1-i]){
            return 0;
        }
    }
    return 1;
}
