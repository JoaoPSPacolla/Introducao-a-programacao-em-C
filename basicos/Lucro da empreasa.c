#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, d, l;
    printf("Qual a receita anual da empresa: ");
    scanf("%f",&r);
    printf("Qual a despesa anual da empresa: ");
    scanf("%f",&d);
    l = r - d;
    printf("O lucro da empresa foi de %.2f",l);
}
