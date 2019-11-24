#include <stdio.h>
#include <stdlib.h>
main()
{
    float pesoterra, pesoplaneta, planeta;

    printf("Peso na terra: ");
    scanf("%f", &pesoterra);
    printf("Planeta:\n");
    printf("\n 01 Mercurio\n 02 Venus\n 03 Marte\n 04 Jupiter\n 05 Saturno\n");
    scanf("%f", &planeta);

    if (planeta == 01)
    {
        pesoplaneta = (pesoterra * 0.37);
        printf("Peso em Mercurio:%.2f\n", pesoplaneta);
    }
    else if (planeta == 02)
    {
        pesoplaneta = (pesoterra * 0.88);
        printf("Peso em Venus:%.2f\n", pesoplaneta);
    }
    else if (planeta == 03)
    {
        pesoplaneta = (pesoterra * 0.38);
        printf("Peso em Marte:%.2f\n", pesoplaneta);
    }
    else if (planeta == 04)
    {
        pesoplaneta = (pesoterra * 2.64);
        printf("Peso em Jupiter:%.2f\n", pesoplaneta);
    }
    else if (planeta == 05)
    {
        pesoplaneta = (pesoterra * 1.15);
        printf("Peso em Saturno:%.2f\n", pesoplaneta);
    }
    else
    {
        printf("Invalido.\n");
    }
}
