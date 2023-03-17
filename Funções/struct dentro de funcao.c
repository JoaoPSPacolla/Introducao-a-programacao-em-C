#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 2

typedef struct {
    int idade, re;
    float salario;
} funcionario;

void manipulacao() {
    funcionario f[MAX];
    int i;

    puts ("---  DADOS  ---");

    for (i=0; i<MAX; i++) {
        printf ("\n\n--- Funcionario %d --- \n", i+1);
        puts ("Insira seu RE:");
        scanf ("%d", &f[i].re);
        puts ("Insira sua idade:");
        scanf ("%d", &f[i].idade);
        puts ("Insira seu sal�rio:");
        scanf ("%f", &f[i].salario);

        if(f[i].idade>40) {
            printf ("\n%.2f + 200,00 b�nus", f[i].salario);
            f[i].salario+=200;
        }
        else
            puts ("\nSem b�nus.");

        printf ("RE: %d \nIdade: %d \nSal�rio total: %.2f", f[i].re, f[i].idade, f[i].salario);
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");
    manipulacao();
    return 0;
}
