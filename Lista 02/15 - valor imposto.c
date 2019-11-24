#include <stdio.h>
#include <stdlib.h>
main()
{
    float valor, imposto;
    char tipo;

    printf("Valor:\n");
    scanf("%f", &valor);
    printf("Tipo de produto.\n");
    printf("l - limpeza\na - alimentacao\nv - vestuario\n");
    scanf(" %c", &tipo);

    switch (tipo)
    {
    case 'l':
        if (valor < 100)
        {
            imposto = valor * 0.05;
            printf("Imposto:%.2f\n", imposto);
        }
        else if (valor == 100 && valor < 500)
        {
            imposto = valor * 0.04;
            printf("Imposto:%.2f\n", imposto);
        }
        else
        {
            imposto = valor * 0.02;
            printf("Imposto:%.2f\n", imposto);
        }
        break;

    case 'a':
        if (valor < 100)
        {
            imposto = valor * 0.03;
            printf("Imposto:%.2f\n", imposto);
        }
        else if (valor == 100 && valor < 500)
        {
            imposto = valor * 0.02;
            printf("Imposto:%.2f\n", imposto);
        }
        else
        {
            imposto = valor * 0.01;
            printf("Imposto:%.2f\n", imposto);
        }
        break;

    case 'v':
        if (valor < 100)
        {
            imposto = valor * 0.07;
            printf("Imposto:%.2f\n", imposto);
        }
        else if (valor == 100 && valor < 500)
        {
            imposto = valor * 0.06;
            printf("Imposto:%.2f\n", imposto);
        }
        else
        {
            imposto = valor * 0.04;
            printf("Imposto:%.2f\n", imposto);
        }
        break;
    }
}
