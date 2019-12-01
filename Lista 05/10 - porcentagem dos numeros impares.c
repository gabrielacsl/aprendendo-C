#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int vetor[30], i, quantidade = 0;

    for (i = 0; i < 30; i++)
    {
        vetor[i] = rand() % 101;
        if (vetor[i] % 2 == 1)
        {
            quantidade++;
        }
        if (vetor[i] % 2 == 0)
        {
            vetor[i] = 0;
        }
        printf("V[%i] = %i\n", i, vetor[i]);
    }
    printf("Porcentagem de impares: %i%%\n", quantidade * 100 / i);
}