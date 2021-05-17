#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 20
void jednaki(char *str1,char *str2);
int main()
{
    char *str1[MAX_SIZE], *str2[MAX_SIZE];

    printf("Unesite string 1\n");
    gets(str1);
    printf("Unesite string 2\n");
    gets(str2);
    jednaki(str1,str2);
    return 0;
}
void jednaki(char *str1,char *str2){
    if(strcmp(str1,str2)== 0){
        printf("Stringovi jesu jednaki\n\n");
    }
    else{
        printf("Stringovi nisu jednaki\n\n");
    }
}
