#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("Digite a nota: ");
        scanf("%i", &n);
    }
    while ((n<0)||(n>10));

    if (n <= 5)
        printf("Ruim");
    else
        printf("Parabens");
    return 0;
}
