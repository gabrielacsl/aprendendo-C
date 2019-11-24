#include <stdio.h>
#include <stdlib.h>
main()
{

    char tipo;
    float kg, pag;

    printf("Peso, em kg: ");
    scanf("%f", &kg);
    printf("Fruta\na - para abacaxi.\ng - para goiaba.\n");
    scanf(" %c", &tipo);

    switch (tipo)
    {
    case 'a':
        if (kg <= 2)
        {
            pag = kg * 1.90;
            printf("Valor:%.2f\n", pag);
        }
        else if (kg > 2 && kg <= 5)
        {
            pag = kg * 1.80;
            printf("Valor:%.2f\n", pag);
        }
        else if (kg > 5 && kg < 8)
        {
            pag = kg * 1.60;
            printf("Valor:%.2f\n", pag);
        }
        else
        {
            pag = kg * 1.6 - (kg * 1.6 * 0.10);
            printf("Valor:%.2f\n", pag);
        }
        break;

    case 'g':
        if (kg <= 2)
        {
            pag = kg * 2.5;
            printf("Valor:%.2f\n", pag);
        }
        else if (kg > 2 && kg <= 5)
        {
            pag = kg * 2.4;
            printf("Valor:%.2f\n", pag);
        }
        else if (kg > 5 && kg < 8)
        {
            pag = kg * 2.2;
            printf("Valor:%.2f\n", pag);
        }
        else
        {
            pag = kg * 2.2 - (kg * 2.2 * 0.10);
            printf("Valor:%.2f\n", pag);
        }
        break;

    default:
        printf("Invalido.\n");
    }
}
