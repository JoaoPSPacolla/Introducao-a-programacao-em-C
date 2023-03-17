#include <stdio.h>
#include <stdlib.h>

void mult(int *v, int x, int n)
{
    int cont=0, i;
    for (i=0; i<n; i++){
        printf("%d, ",v[i]);
        if (v[i] % x == 0)
            cont++;
    }
    printf("\n%d desses sao multiplos de %d", cont, x);
}

int main()
{
    int *v;
    int n, x, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    v = (int*) malloc(n*sizeof(int));
    if (v==NULL)
    {
        printf("MOIO O SISTEMA");
        exit(0);
    }

    for(i=0; i<n;i++)
    {
        printf("Digite o %d° numeros inteiros: ", n-i);
        scanf("%d", &v[i]);
    }

    printf("Digite um valor qualquer (inteiro): ");
    scanf("%d", &x);

    mult(v, x, n);

    free (v);
    return 0;
}
