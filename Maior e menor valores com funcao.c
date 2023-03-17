#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void operacao(int *px, int *py)
// ponteiro de X (*px) vai apontar para o ENDEREÇO de n1
//e o ponteiro de Y (*py), n2
{
    if (*px>*py)
        printf("O maior valor é %d e o menor, %d", *px, *py);
    else
        printf("O maior valor é %d e o menor, %d", *py, *px);
}


int main()
{
    setlocale(LC_ALL,"portuguese");
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    operacao(&n1, &n2);
    return 0;
}
