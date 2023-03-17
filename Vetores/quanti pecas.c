#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant[9], valor[9], cont;
    float total;
    char peca[200];

    for (cont=0; cont<10; cont++)
    {
    printf("Peca vendida: ");
    setbuf(stdin,NULL);
    gets(peca);
    printf("Quantidade dessa peca vendida: ");
    scanf(" %d", &quant[cont]);
    printf("Preco dessa peca: ");
    scanf(" %d", &valor[cont]);
    }

    for (cont=0; cont<10; cont++)
    {
        total = (quant[cont] * valor [cont]);
        printf("\nA peca %s teve um total de vendas de %.2f", peca, total);
        // Ainda nao tem como fazer pra ele ler vários nomes. O vetor não funciona para CHAR
        // Na próxima aula será ensinado um método para fazer isso, mas por enquanto nao da
        // Quando aprender, arrumar
    }



    return 0;
}
