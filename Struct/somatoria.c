#include <stdio.h>
#include <stdlib.h>

long int soma(int n) // esse n é diferente daquele
{
    if (n == 0)
        return(0);
    if (n<0)
        return("Esse codigo nao funciona com numeros negativos");
    else
        return(n+soma(n-1));
}


int main()
{
    int n;
    int i;
    printf("Digite um valor para N: ");
    scanf("%d", &n);
     for(i=0;i<=n;i++)// ou n+1
     {
        printf("d + ",i);
     }
    n = soma(n);
    printf(" = %d",n);
    return 0;
}
