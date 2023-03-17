#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2];
    int i, j, p, soma=0;
    for(i=0; i<2; i++)
    {
      for(j=0; j<2; j++)
      {
       printf("Digite um valor para a linha %d coluna %d: ",i, j);
       scanf("%d", &matriz[i][j]);
       soma += matriz[i][j];
      }
    }
     for(i=0; i<2; i++)
    {   printf("\n");

      for(j=0; j<2; j++)
        {
        printf("%d ", matriz[i] [j] );
        }
    }
    printf("\nSoma: %d", soma);
    return 0;
}



// Pro exercicio 2 fazer um IF para fazer o calculo: Se linha = coluna some
