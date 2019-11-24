#include <stdio.h>
main()
{
    int i, operacao, numero, f = 1, g = 0, quantidade;
    int fatorial = 1;

    printf("Operacao:\n1- numero par ou impar\n2- divisores\n3 - fatorial\n");

    for (i = 1; i <= 20; i++)
    {

        prinf("Numero: \n");
        scanf("%i", &numero);

        if (operacao == 1)
        {
            if (numero % 2 == 0)
            {
                printf("Par.\n");
            }
            else
            {
                printf("Impar");
            }
        }
        else if (operacao == 2)
        {
            while (g <= numero)
            {
                if (numero % g == 0)
                {
                    printf("Divisores: %i\n", g);
                }
                g++;
            }
        }
        else
        {
            while (f <= numero)
            {
                fatorial *= f;
                f++;
            }
            printf("Fatorial do numero %i = %i\n", numero, fatorial);
        }
    }
}
