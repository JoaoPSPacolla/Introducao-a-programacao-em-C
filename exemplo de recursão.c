#include <stdio.h>
#include <stdlib.h>

void crescente(int num)
{
    if (num>0)
    {
        crescente(num-1);
        printf("%d",num);
    }
}

void decrescente(int num)
{
    if (num>0)
    {
        printf("%d",num);
        decrescente(num-1);
    }
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    crescente(num);
    printf("\n\n");
    decrescente(num);
}
