#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 50
void updown(char *str1);
char lower_to_upper(char ch);
int main()
{
    char *str1[MAX_SIZE];
    printf("Unesite zeljeni string \n");
    gets(str1);
    updown(str1);


    return 0;
}
void updown(char *str1){
    int duzina;
    int i;
    duzina = strlen(str1);
    for(i=0;i<duzina;i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = lower_to_upper(str1[i]);
        }
    }
    printf("Novi string je %s",str1);
}
char lower_to_upper(char ch){
    return ('A' + ch - 'a');
}
