#include <stdio.h>
#include <stdlib.h>
main()
{
    char area;
    float atual, corrigido, aumento;

    printf("Atuacao:\n");
    printf("a - administracao. \nb - producao. \n");
    scanf(" %c", &area);

    printf("Salario atual: ");
    scanf("%f", &atual);

    switch (area)
    {
    case 'a':

        if (atual <= 700)
        {
            printf("Percentual de aumento de 18%%\n");

            aumento = atual * 0.18;
            corrigido = atual + aumento;

            printf("Aumento:%.1f\n", aumento);
            printf("Valor corrigido:%1.f\n\n", corrigido);
        }
        else if (atual > 700 && atual <= 1800)
        {
            printf("Percentual de aumento é de 12%%\n");

            aumento = atual * 0.12;
            corrigido = atual + aumento;

            printf("Aumento:%.1f\n\n", aumento);
            printf("Valor corrigido:%1.f\n", corrigido);
        }
        else if (atual > 1800 && atual <= 2500)
        {
            printf("Percentual de aumento de 08%%\n");

            aumento = atual * 0.08;
            corrigido = atual + aumento;

            printf("Aumento:%.1f\n\n", aumento);
            printf("Valor corrigido:%1.f\n\n", corrigido);
        }
        else
        {
            printf("Percentual de aumento de 05%%\n");

            aumento = atual * 0.05;
            corrigido = atual + aumento;

            printf("Aumento de:%.1f\n\n", aumento);
            printf("Valor corrigido:%1.f\n\n", corrigido);
        }
        break;

    case 'b':

        if (atual <= 700)
        {
            printf("Percentual de aumento de 15%%\n\n");

            aumento = atual * 0.15;
            corrigido = atual + aumento;

            printf("Aumento de:%.1f\n\n", aumento);
            printf("Valor corrigido:%1.f\n\n", corrigido);
        }
        else if (atual > 700 && atual <= 1800)
        {
            printf("Percentual de aumento de 10%%\n\n");

            aumento = atual * 0.10;
            corrigido = atual + aumento;

            printf("Aumento de:%.1f\n\n", aumento);
            printf("valor corrigido:%1.f\n\n", corrigido);
        }
        else if (atual > 1800 && atual <= 2500)
        {
            printf("Percentual de aumento de 07%%\n\n");

            aumento = atual * 0.07;
            corrigido = atual + aumento;

            printf("Aumento de:%.1f\n\n", aumento);
            printf("Valor corrigido:%1.f\n\n", corrigido);
        }
        else
        {
            printf("Percentual de aumento de 0%%\n\n");

            aumento = atual * 0;
            corrigido = atual + aumento;

            printf("Aumento de:%.1f\n\n", aumento);
            printf("Nao houve aumento\n");
        }
        break;

    default:
        printf("Invalido.\n");
    }
}
