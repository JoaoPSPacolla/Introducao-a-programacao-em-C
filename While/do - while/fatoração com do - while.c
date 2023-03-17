#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    do
    {
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);
    }

    while(n<0);

    int num, cont, resp = 1;
    printf("Digite um número para ver seu fatorial: ");
    scanf("%d",&num);
    for (cont=num; cont>=1; cont--){
        resp *= cont;
        if (cont > 1)
            printf("%d x ", cont);
        if (cont == 1){
            printf("1 = %d", resp);
        }
    }
    printf("\nO faotrial de %d é igual a %d", num, resp);

    return 0;
}
