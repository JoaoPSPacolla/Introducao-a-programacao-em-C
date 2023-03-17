#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca para habilitar codigos matematicos, no caso aqui será usado para a equa 2 grau

void main()
{
    float a,b,c,del,raiz,x1,x2;
    printf("Digite tres valores: ");
    scanf("%f %f %f", &a,&b,&c);
    del = b*b - 4*a*c;
    raiz = sqrt(del);  //sqrt serve para fazer raiz quadrada
    x1 = (- b + raiz)/ (2*a);
    x2 = (- b - raiz)/ (2*a);
    if (a==0)
        printf("Nao existe equacao de 2 grau");
    else
    {
    if (del < 0)
        printf("Nao existe raiz real para delta negativo");
    else
      {

        if (del == 0)
            printf("x1 e x2 sao iguais. Ambos valem %f", x1);
        else
            printf("O valor de x1 e %.2f e de x2, %.2f", x1, x2);
      }

    }
}
