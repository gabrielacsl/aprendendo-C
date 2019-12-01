#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));

    int vetor[10];
    int i, aux, contador;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 10 + 1;
    }
    printf("Ordem atual dos itens no array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", vetor[i]);
    }

    for (contador = 1; contador < 10; contador++)
    {
        for (i = 0; i < 10 - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
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
