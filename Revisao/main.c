#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, alt, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &alt);
    imc = peso/(alt * alt);
    if (imc < 30)
        printf("Seu IMC � de %.2f. Voce est� com um peso normal", imc);
    else
        printf("Seu IMC � de %.2f. Voce est� obeso", imc);

}
