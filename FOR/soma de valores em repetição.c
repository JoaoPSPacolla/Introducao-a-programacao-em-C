#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cont, v, s=0;
   for(cont=0;cont<=11;cont++)
    {
        s += v;
        printf("Digite o numero %i: \n", cont);
        scanf("%i",&v);
    }
    printf("A soma dos valores e: %d", s);
}
