#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int x,y,z;
    setlocale(LC_ALL,"");
    printf("Digite três valores: ");
    scanf("%i %i %i",&x,&y,&z);
    if ((x<y+z)&&(y<x+z)&&(z<y+x))
    {
        if ((x==y)&&(y==z)){
            printf("Triangulo equilatero");}
        else
            if ((x!=y)&&(y!=z)){
                printf("Triangulo escaleno");}
            else
                printf("Triangulo isoceles");
    }

    else
        printf("Nao e triangulo");


    return 0;
}
