#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int vetor[30], i, numero, quantidade = 0;

    for (i = 0; i < 30; i++)
    {
        vetor[i] = rand() % 150 + 1;
    }
    printf("\nNumero: ");
    scanf("%i", &numero);

    for (i = 0; i < 30; i++)
    {
        if (vetor[i] % 2 == 1)
        {
            if (vetor[i] > numero)
            {
                quantidade++;
            }
        }
    }
    printf("Quantidade = %i\n", quantidade);
}