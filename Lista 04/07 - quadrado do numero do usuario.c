#include <stdio.h>
#include <stdlib.h>
main()
{
    int i, numero;

    for (i = 0; i <= 10; i++)
    {
        numero = 0;
        printf("Numero: ");
        scanf("%i", &numero);
        printf("Quadrado: %i\n", numero * numero);
    }
}