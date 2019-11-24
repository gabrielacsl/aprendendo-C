#include <stdio.h>
#include <stdlib.h>
main()
{
    int area, comprimento, altura, soma;
    char comodo[15], resposta;

    do
    {
        printf("Comodo: \n");
        scanf("%s", &comodo);
        printf("Comprimento: \n");
        scanf("%i", &comprimento);
        printf("Altura: \n");
        scanf("%i", &altura);

        area = altura * comprimento;
        soma += area;
        printf("Area %s: %i", comodo, area);
        printf("Deseja continuar? s/n\n");
        scanf("% c", &resposta);


    } while (resposta == 's' && resposta == 'S');
}