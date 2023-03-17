#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val;
    printf("Qual o valor da compra: ");
    scanf("%f", &val);
    if (val < 100){
        val += 50;
        printf("O total vai ser de %.2f", val);}
    else
        val += 30;
        printf("O total vai ser de %.2f", val);
}
