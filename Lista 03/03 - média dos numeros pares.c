#include <stdio.h>
#include <math.h>
main()
{
    int numero = 1, i = 0;
    float media = 0, soma;
    while (numero != 0)
    {
        printf("Numero: ");
        scanf("%i", &numero);
        if (numero % 2 == 0 && numero != 0)
        {
            soma += numero;
            i++;
        }
    }
    media = soma / i;
    printf("Media dos pares: %.f.\n", media);
}