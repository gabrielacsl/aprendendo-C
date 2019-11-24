#include <stdio.h>
#include <stdlib.h>
main()
{
    int n, i;
    float soma = 1;

    printf("Numero: ");
    scanf("%i", &n);

    for (i = 2; i <= n; i++)
    {
        soma += (1.0 / i);
    }
    printf("Valor de h: %.2f", soma);
}