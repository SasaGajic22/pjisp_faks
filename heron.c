#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    float s,P;

    printf("Unesi stranicu a \n");
    scanf("%f",&a);
    printf("Unesi stranicu b\n");
    scanf("%f",&b);
    printf("Unesi stranicu c\n");
    scanf("%f",&c);

    s = (a+b+c)/2;
    P = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Povrsina trougla je : %.3f\n",P);
    return 0;
}
