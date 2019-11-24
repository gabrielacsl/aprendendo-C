#include <stdio.h>
main()
{
    float produto, prestacao;

    printf("Valor do produto: ");
    scanf("%f", &produto);

    prestacao = produto / 5;
    printf("Valor prestacao:%.4f\n\n", prestacao);
}
