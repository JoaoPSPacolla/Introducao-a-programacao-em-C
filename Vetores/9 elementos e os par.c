#include <stdio.h>
#include <stdlib.h>
#define max 9

int main()
{
    int vetor[max];
    int i;
    for (i=0; i<max; i++)
    {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
    }

    for (i=0; i<max; i++)
    {
        if (vetor[i]%2==0)
            printf("\nValor %d na posicao - %d", vetor[i], i+1);
            //vetor[i] = valor
            //i = posição
    }
    return 0;
}
