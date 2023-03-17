#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tres [3][3], i, j;
    int somag=0;
    int somad=0;
    for (i=0; i<3; i++) //i == linha j == coluna
    {
        for (j=0; j<3; j++)//Quando entra de novo, a contagem é reiniciada
        {
            printf("Digite um número para a posição [%d][%d]: ",i,j );
            scanf("%d", &tres[i][j]);
        }
    }

    somad = tre[0][0] + tres[1][1] + tres[2][2];

    printf("Soma Geral = %d\n", somag);
    printf("Soma das Diagonais = %d", somad);
    return 0;
}

