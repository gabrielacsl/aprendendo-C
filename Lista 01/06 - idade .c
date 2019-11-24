#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
    float nascimento, atual, idade, idade2028;

    printf("Ano nascimento: ");
    scanf("%f", &nascimento);

    printf("Ano atual: ");
    scanf("%f", &atual);

    idade = (atual - nascimento);
    idade2028 = (2028 - nascimento);

    printf("Idade atual: %.f", idade);
    printf("Idade 2028: %.f", idade2028);
}
