#include <stdio.h>
#include <stdlib.h>
main()
{
    float l1, l2, l3;

    printf("Lado 01:\n");
    scanf("%f", &l1);
    printf("Lado 02:\n");
    scanf("%f", &l2);
    printf("Lado 03:\n");
    scanf("%f", &l3);

    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
    {
        printf("Triangulo");

        if (l1 == l2 && l2 == l3)
        {
            printf(" equilatero.\n");
        }
        else if (l1 == l2 && l2 == l3 && l1 == l3)
        {
            printf(" isoceles.\n");
        }
        else
        {
            printf(" escaleno.\n");
        }
    }
    else
    {
        printf("Invalido.\n");
    }
}
