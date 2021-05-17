#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int sum = 0;
    printf("Unesi prirodan broj n = \n");
    scanf("%d",&n);

    for(i=2;i<n;i++) {
        if(n%i == 0)
            sum++;
    }
    if(sum == 0)
        printf("Broj n = %d je prost\n",n);
    else
        printf("Broj n = %d nije prost\n",n);
    return 0;
}
