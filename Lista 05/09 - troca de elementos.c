#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int i, f, aux, vetor[20];

    for (i = 0; i < 20; i++)
    {
        vetor[i] = rand() % 101;
        printf("Vetor [%i] = %2i\n", i, vetor[i]);
    }
    printf("------------ Troca ------------\n");
    for (i = 0, f = 11; i < 10; i++, f++)
    {
        aux = vetor[i];
        vetor[i] = vetor[f];
        vetor[f] = aux;
    }
    for (i = 0; i < 20; i++)
    {
        printf("Vetor[%i] = %i\n", i, vetor[i]);
    }
}