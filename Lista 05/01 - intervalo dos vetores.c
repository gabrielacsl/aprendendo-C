#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int vetor[10], i;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 101;
        printf("V[%i] = %i\n", i, vetor[i]);
    }
    printf("\n\n--- Intervalo ---- \n\n");
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] >= 15 && vetor[i] <= 45)
        {
            printf("V[%i]= %i\n", i, vetor[i]);
        }
    }
}
