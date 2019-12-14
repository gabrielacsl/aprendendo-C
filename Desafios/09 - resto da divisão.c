#include <stdio.h>
main()
{
    int numero[2], i, maior = 0, resultado[2];
    scanf("%i %i", &numero[0], &numero[1]);

    resultado[0] = numero[0] % numero[1];
    resultado[1] = numero[1] % numero[0];

        if (resultado[0] > resultado[1])
        {
            maior = resultado[0];
        }
        else
        {
            maior = resultado[1];
        }
    
    printf("%i\n", maior);
}