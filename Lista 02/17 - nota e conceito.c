#include <stdio.h>
#include <stdlib.h>
main()
{
    float nota, faltas;

    printf("Nota:\n");
    scanf("%f", &nota);
    printf("Faltas:\n");
    scanf("%f", &faltas);

    if (faltas <= 10)
    {
        if (nota >= 9 && nota <= 10)
        {
            printf("Conceito: A\n");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("Conceito: B\n");
        }
        else if (nota >= 5 && nota <= 7.4)
        {
            printf("Conceito: C\n");
        }
        else if (nota >= 4.9 && nota <= 4.9)
        {
            printf("Conceito: D\n");
        }
        else
        {
            printf("Conceito: E\n");
        }
    }
    else
    {
        if (nota >= 9 && nota <= 10)
        {
            printf("Conceito: B\n");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("Conceito: C\n");
        }
        else if (nota >= 5 && nota <= 7.4)
        {
            printf("Conceito: D\n");
        }
        else if (nota >= 4.9 && nota <= 4.9)
        {
            printf("Conceito: E\n");
        }
        else
        {
            printf("Conceito: E\n");
        }
    }
}
