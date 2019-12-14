#include <stdio.h>
main()
{
    int numero[2];
    scanf("%i %i", &numero[0], &numero[1]);
    printf("%.2f\n", (float)numero[0] / numero[1]);
}