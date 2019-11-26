#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int vetor[100], i, q[5];

    for (i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 500;
        if (vetor[i] < 101)
        {
            q[0]++;
        }
        else if (vetor[i] < 201)
        {
            q[1]++;
        }
        else if (vetor[i] < 301)
        {
            q[2]++;
        }
        else if (vetor[i] < 401)
        {
            q[3]++;
        }
        else
        {
            q[4]++;
        }
    }
    printf("Valores de 0 a 100: %i\n", q[0]);
    printf("Valores de 101 a 200: %i\n", q[1]);
    printf("Valores de 201 a 300: %i\n", q[2]);
    printf("Valores de 301 a 400: %i\n", q[3]);
    printf("Valores de 401 a 500: %i\n", q[4]);
}
