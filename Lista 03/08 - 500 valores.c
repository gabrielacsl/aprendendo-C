#include <stdio.h>
#include <math.h>
main()
{

    int valor = 0, menor, maior, i = 0;
    float media;

    while (i < 500)
    {
        printf("Valor: ");
        scanf("%i", &valor);
        i++;
        media += valor;

        if (i == 1)
        {
            maior = valor;
            menor = valor;
        }

        if (maior < valor)
        {
            maior = valor;
        }
        if (menor > valor)
        {
            menor = valor;
        }
    }
    printf("Maior valor: %i\n", maior);
    printf("Menor valor: %i\n", menor);
    printf("Media: %.2f\n", media / 500);
}