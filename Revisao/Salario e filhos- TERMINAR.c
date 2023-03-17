#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filho;
    float sal, maiorsal=0;
    char resp;
    do
    {
        printf("Digite o seu salario: ");
        scanf("%f", &sal);
        if (sal > maiorsal)
            maiorsal = sal;
        printf("Digite o seu numero de filhos: ");
        scanf("%i", &filho);
        printf("Quer continuar? (S/N): ");
        scanf(" %c", &resp); // colocar o espaço antes do %c pra limpar o buffer , se nao da erro
    }
    while (resp != 'N' && resp != 'n');

    printf("O maior salario e %.2f", maiorsal);
}
