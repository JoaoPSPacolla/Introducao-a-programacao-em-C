#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor [2][2];
    int i, j, x;
    int soma=0;

    for(i=0;i<2;i++){    //linha
        for(j=0;j<2;j++){ // coluna
            printf("Digite um valor para a posição [%d,%d]",i,j);
            scanf("%i", &valor[i][j]);
            soma += valor[i][j];
            //printf("%d - ", valor[i][j]);
        }
    }

    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d - ", valor[i][j]);
        }
    }
    
    printf("Soma: %d", soma);
    return 0;
}
