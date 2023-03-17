/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int num, s;
    printf("Digite um número: ");
    scanf("%i",&num);
    if (num % 2 == 0){
        }if (num < 20){
            s = num + 10;
            printf("%i",&s);
        }
        else{
            s = num * 3;
            printf("%i",&s);
        }
    else{
        printf("impar");
    }
}
