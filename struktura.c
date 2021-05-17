#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 2

struct tacka {
    float x;
    float y;
};
void ispis(struct tacka *t);
void unos(struct tacka *t);
int provera(struct tacka *t);
int main()
{
    struct tacka *t[MAX_SIZE];
    unos(t);
    ispis(t);
    printf("Tacka najbliza kordinatnom pocetku je t%d\n",provera(t));
    //printf("Njene kordinate su %f %f\n",t[])



    return 0;
}
void ispis(struct tacka *t){
    int i;
    for(i=0;i<MAX_SIZE;i++){
    printf("Tacka t%d je %f\t%f\n",i,t[i].x,t[i].y);
    }


}
void unos(struct tacka *t){
    int i;
    for(i=0;i<MAX_SIZE;i++){
        printf("Unesi kordinate tacke %d:\n",i);
        scanf("%f %f",&t[i].x,&t[i].y);
    }

}
int provera(struct tacka *t){
    float min;
    int br;
    int i;
    min = 1;
    for(i=0;i<MAX_SIZE;i++){
        float tmp,c;
        tmp = pow(t[i].x,2) + pow(t[i].y,2);
        c = sqrt(tmp);
        if(c <= min){
            min = c;
            br = i;

        }
    }
    return br;
}
