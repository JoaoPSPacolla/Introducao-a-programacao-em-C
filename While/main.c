/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char resp;
    while (resp="N");
    {
        printf("Quer continuar? \n");
        scanf("%c", &resp);
        resp=toupper(resp);//converte o valor digitado em maiusculo
    }

    return 0;
}
