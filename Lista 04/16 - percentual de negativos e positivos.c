#include <stdio.h>
#include <stdlib.h>
main()
{
    int i, soma = 0, positivo = 0, negativo = 0, numero, total;
    for (i = 0; i < 4; i++)
    {
        printf("Numero: ");
        scanf("%i", &numero);
        soma += numero;

        if (numero < 0)
        {
            negativo++;
        }
        else if (numero > 0)
        {
            positivo++;
        }
    }
    total = negativo + positivo;
    printf("Quantidade e percentual positivo: %i e %i%%\n", positivo, positivo * 100 / total);
    printf("Quantidade e percentual negativo: %i e %i%%\n", negativo, negativo * 100 / total);
    printf("Media: %i\n", soma / total);
}