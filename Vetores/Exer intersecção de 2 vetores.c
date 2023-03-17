#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10];
    int v2 [10];
    int v3[20];//O v3 tem 20 posições pois irá agrupar 10 do v1 e 10 do v2
    int i, j=0 ,x=0;

    printf("Digite 10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v1[i]);
    }

    printf("----------------------------------------------------\n");

    printf("Digite outros 10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v2[i]);
    }

    // --------------------------------

    for(i=0;i<20;i++)
    {
        if(i%2==0)
        {
            v3[i]=v1[j];//O veotr começa em 0, portanto os valores do v1 sempre vão estar nas casas pares, já que começa com o v1 depois v2
            j++;
        }
        else
        {
            v3[i]=v2[x]; //consequentemente, os valores de v2 sempre vão estar nas casas ímpares
            x++;
        }
    }

    printf("A intersecção, que forma o v3, será:\n");
    for(i=0;i<20;i++)
        printf("%d - ",v3[i]);
    return 0;
}
