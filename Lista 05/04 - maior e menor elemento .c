#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int a[50], maior = 0, menor, i;

    for (i = 0; i < 50; i++)
    {
        a[i] = rand() % 201;

        if (maior < a[i])
        {
            maior = a[i];
        }
        if (i == 0)
        {
            menor = a[i];
        }
        else if (a[i] < menor)
        {
            menor = a[i];
        }
    }
    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);
}