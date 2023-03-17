/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    int cont, num, cal;
    setlocale(LC_ALL,"");
    printf("Digite um numero para ver sua tabuada: ");
    scanf ("%i", &num);
    for (cont=0;cont<=10;cont++);
    {
        cal = (num * cont);
        printf("%i x %d = %d", num, cont, cal);
    }

    return 0;
}
