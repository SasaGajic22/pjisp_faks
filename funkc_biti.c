#include <stdio.h>
#include <stdlib.h>
void getBit(int reg,int pozicija);
int setBit(int reg,int pozicija);
void clearBit(int reg,int n);
int main()
{
    int reg = 5;
    getBit(reg,2);
    printf("\nVrednost nakon setovanja bita je %d\n",setBit(reg,3));
    clearBit(reg,0);
    return 0;

}
void getBit(int reg,int pozicija){
    printf("%d\n",(reg & (1 << pozicija)) != 0);

}
int setBit(int reg,int pozicija){
    reg = reg | (1 << pozicija);
    return reg;
}
void clearBit(int reg,int n){
    reg = reg & (~(1 << n));
    printf("\nBroj nakon setovanja bita na 0 je %d\n",reg);

}
