#include <stdio.h>
#include <stdlib.h>
main()
{
    int maior, i, numero;
    for (i = 1; i <= 10; i++)
    {
        printf("Numero: ");
        scanf("%i", &numero);

        if (numero > 30)
        {
            maior++;
        }
    }
    printf("Quantidade de maiores: %i", maior);
}