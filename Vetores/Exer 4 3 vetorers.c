#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vet1[10], vet2[10], vet3[20];
    for (i=0; i<10; i++)
    {
    printf("Digite um numero: ");
    scanf("%d", &vet1[i]);
    }

    for (i=0; i<10; i++)
    {
    printf("Digite um numero: ");
    scanf("%d", &vet2[i]);
    }

    for (i=0; i<20; i++)
    {
    if (vet1[i]%2==0)
        printf("%d - ", vet1[i]);
    else
        printf("%d - ", vet2[i]);
    }

    return 0;
}
