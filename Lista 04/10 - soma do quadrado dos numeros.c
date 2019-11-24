#include <stdio.h>
#include <stdlib.h>
main()
{
    int i, quadrado = 0, soma = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("%i\n", i);
        quadrado = i * i;
        soma += quadrado;
    }
    printf("Soma: %i", soma);
}