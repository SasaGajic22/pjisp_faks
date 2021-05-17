#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R_1,R_2;

    printf("Za koliko dana posao uradi radnik broj 1 ? \n");
    scanf("%d",&R_1);
    printf("Za koliko dana posao uradi radnik 2 \n");
    scanf("%d",&R_2);

    printf("Zajedno ce posao uraditi za %d dana \n",(R_1+R_2)/2);
    return 0;
}
