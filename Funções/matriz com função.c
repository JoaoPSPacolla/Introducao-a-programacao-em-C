#include <stdio.h>
#include <stdlib.h>
#define MAXLIN 2
#define MAXCOL 3

void inicializa(int mat[][MAXCOL])
{
    int i,j;
    for(i=0;i<MAXLIN;i++)
        for(j=0;j<MAXCOL;j++)
            mat[i][j]=0;
}

void preenche(int mat[MAXLIN][MAXCOL])
{
    int i,j;
    for(i=0;i<(MAXLIN);i++)
    {
        for(j=0;j<MAXCOL;j++)
        {
            printf("\nDigite o valor para linha %d, coluna %d ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void imprime(int *mat)
{
    int i,j;
    printf("\n\n");
    for(i=0;i<(MAXLIN);i++)
    {
        for(j=0;j<MAXCOL;j++)
            printf("%d", mat[i*MAXCOL+j]);
        printf("\n");
    }
}

int qtdPares(int mat[MAXLIN][MAXCOL]) // No lugar de MAXLIN ´pode ficar vazio []
{
    int i,j, contPares = 0, contImpar = 0;
    for(i=0;i<MAXLIN;i++)
        for(j=0;j<MAXCOL;j++)
          {
             if((mat[i][j]%2)==0)
                contPares += 1;
          }
    return contPares;
}

int main()
{
    int mat[MAXLIN][MAXCOL];
    int i,j,pares;
    inicializa(mat);
    imprime(mat);//quando a matriz ta em zero e o usuario vai digitar
    preenche(mat);
     printf("AAAA");
    imprime(mat);// quando ja foi digitada pelo usuario
    pares=qtdPares(mat);
    printf("\nQuantidade de Pares: %d \n",pares);
    getch(); // Espera um ENTER antes de encerrar o codigo
    return 0;
}
