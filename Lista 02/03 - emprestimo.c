#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float salario, prestacao;
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao <= (salario * 0.3))
    {
        printf("Emprestimo concedido.");
    }
    else
    {
        printf("Emprestimo nao concedido");
    }
}