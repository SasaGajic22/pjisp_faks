#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 80
#include <string.h>
int prebroj(char *str);
int is_char(char ch);
int broj_reci_sa_m(char *str);
int main(int arg_br,char *arg[])
{
    char *str[MAX_SIZE];
    printf("Unesite zeljeni string\n");
    gets(str);
    printf("Broj reci u stringu je %d\n",prebroj(str));
    printf("Broj reci sa slovom m ili M je %d\n",broj_reci_sa_m(str));
    return 0;
}
int prebroj(char *str){
    int duzina = 0;
    duzina = strlen(str);
    int i;
    int brojac = 0;
    for(i=0;i<=duzina;i++){
        if(str[i] == ' ' || str[i] == NULL){
            brojac++;
        }
    }
    return brojac;
}
int is_char(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z') || (ch >= 0 && ch <= 9)){
        return 1;
    }
    else{
        return 0;
    }
}
int broj_reci_sa_m(char *str){
    int br_m = 0;
    if(*str == 'm' || *str == 'M'){
        br_m++;
    }
    str++;
    while(*str != NULL){
        if(!is_char(*str) && (*(str+1) == 'm' || *(str+1) == 'M')){
            br_m++;
            str++;
        }
        else{
            str++;
        }
    }
    return br_m;

}
