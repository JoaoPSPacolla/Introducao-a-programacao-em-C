/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    int num, cont, resp = 1;
    printf("Digite um número para ver seu fatorial: ");
    scanf("%d",&num);
    for (cont=num; cont>=1; cont--){
        resp *= cont;
        if (cont > 1)
            printf("%d x ", cont);
        if (cont == 1){
            printf("1 = %d", resp);
        }
    }
    printf("\nO faotrial de %d é igual a %d", num, resp);

    return 0;
}
