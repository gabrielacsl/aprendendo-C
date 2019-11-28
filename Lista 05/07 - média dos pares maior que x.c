#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int vetor[50], x, i, soma, quantidade = 0;

    for (i = 0; i < 50; i++)
    {
        vetor[i] = rand() % 100 + 1;
        printf("V[%i] = %i\n", i, vetor[i]);
    }
    printf("\nDigite um numero: ");
    scanf("%i", &x);

    for (i = 0; i < 50; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            if (vetor[i] > x)
            {
                quantidade++;
                soma += vetor[i];
            }
        }
    }
    printf("Quantidade: %i\n", quantidade);
    printf("Media: %i\n", soma / quantidade--);
}