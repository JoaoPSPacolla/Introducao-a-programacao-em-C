#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, d;
    char pag;
    printf("Digite o valor da compra: ");
    scanf("%f", &c);
    printf("Digite a forma de pagamento (V ou P): ");
    setbuf(stdin,NULL);
    scanf("%c", &pag);
    if ((pag == 'V')||(pag == 'v'))             // o || é ''ou''
     //o v tem que estar entre aspas simples
    {
        d = c - (c/100)*10;
        printf("Voce tera um desconto de %f\n", d);
    }
    else
    {
        printf("Vc nao possui desconto\n");
        printf("Vc vai pagar %f", c);
    }


    return 0;
}
