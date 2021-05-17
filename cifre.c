#include <stdio.h>
#include <stdlib.h>
int faq(int cifra);
int main()
{
    int s,d,j;
    for(s=1;s<10;s++){
        for(d=0;d<10;d++){
            for(j=0;j<10;j++){
                int broj = s*100 + d*10 + j*1;
                if(broj == faq(s)+faq(d)+faq(j))
                    printf("Broj %d\n",broj);
            }
        }
    }
    return 0;
}
int faq(int cifra){
    int i;
    if(cifra == 0)
        return 0;
    int sum =1;
    for(i=1;i<=cifra;i++){
        sum = sum * i;
    }
    return sum;
}
