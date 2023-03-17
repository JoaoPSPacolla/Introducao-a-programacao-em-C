#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, mv=0, mc=0;
    do
    {
    printf("Digite a idade de uma pessoa: ");
    scanf("%D", &i);
    if (i==0)
        break;
    if (i<21)
        mv += 1;
    if (i>50)
        mc += 1;
    }

    while (i!=0);

    printf("\nO total de pessoas com menos de 21 anos e: %i\n", mv);
    printf("Ja os com mais de 50, %d", mc);
    return 0;
}
