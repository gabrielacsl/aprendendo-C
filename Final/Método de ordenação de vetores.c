#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));

    int vetor[10];
    int i, aux, f;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 10 + 1;
    }
    printf("Ordem atual dos itens no array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", vetor[i]);
    }

    for (i = 1; i < 10; i++) // cada volta nesse for se chama iteração
    {
        for (f = 0; f < 10 - 1; f++)
        {
            if (vetor[f] > vetor[f + 1])
            {
                aux = vetor[f];
                vetor[f] = vetor[f + 1];
                vetor[f + 1] = aux;
            }
        }
    }
    printf("\nElementos do array em ordem crescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", vetor[i]);
    }
    printf("\n");
}
