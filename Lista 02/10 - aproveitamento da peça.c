#include <stdio.h>
#include <stdlib.h>
main()
{

    float peso, aproveitamento;

    printf("Peso: ");
    scanf("%f", &peso);

    if (peso <= 9)
    {
        printf("Nao aproveitada.\n");
    }
    else if (peso <= 20)
    {
        aproveitamento = (0.3 * peso);
        printf("Aproveitamento:%.2f\n", aproveitamento);
    }
    else if (peso <= 50)
    {
        aproveitamento = (0.6 * peso);
        printf("Aproveitamento:%.2f\n", aproveitamento);
    }
    else
    {
        aproveitamento = (0.85 * peso);
        printf("Aproveitamento:%.2f\n", aproveitamento);

    }
}    
