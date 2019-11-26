#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
int vetor[10], i;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 100;

        if (vetor[i] < 30)
        {
            vetor[i] = 1;
        }
        printf("V[%i] = %i\n", i, vetor[i]);
    }
}
