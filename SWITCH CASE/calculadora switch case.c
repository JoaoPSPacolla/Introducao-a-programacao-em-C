#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, m, ms, v, d;
    char op;
   printf("Digite: numero operador numero\n");
   scanf ("%f %c %f", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        m = num1 + num2;
        printf("A soma dos dois numeros e %.2f", m);
        break;
    case '-':
        ms = num1 - num2;
        printf("A subtracao dos dois numeros e %.2f", ms);
        break;
    case '*':
        v = num1 * num2;
        printf("A multiplicacao dos dois numeros e %.2f", v);
        break;
    case '/':
        if (num2 == 0)
            printf("Nao e possivel dividir por zero");
        else
        {
            d = num1 / num2;
            printf("A divisao dos dois numeros e %.2f", d);
            break;
        }
    default: printf("Operador invalido");
    }



    return 0;
}
