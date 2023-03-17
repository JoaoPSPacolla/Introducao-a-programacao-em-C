#include <stdio.h>
#include <stdlib.h>

void mostraVet(int vet[],int tamanho)
{
    int i;
    printf("\n");
    for(i=0;i<tamanho;i++)
    {
        printf("[%d]",vet[i]);
    }
}
int main()
{
    //declarando vetor
    int vet[4],i;
    //lendo vetor
    for(i=0;i<4;i++)
    {
        printf("Digite o %do. valor",i+1);
        scanf("%d",&vet[i]);
    }
    //mostrando vetor
    mostraVet(vet,4);
    return 0;
}
