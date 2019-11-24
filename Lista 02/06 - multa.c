#include <stdio.h>
#include <stdlib.h>
main()
{

    float kg, excesso, multa;

    printf("kg: ");
    scanf("%f", &kg);

    if (kg > 50)
    {
        excesso = (kg - 50);
        multa = (excesso * 4.00);
        printf("Excedeu, em kg:%.f\n", excesso);
        printf("multa: %.2f\n", multa);
    }
    else
    {
        printf("Peso dentro do regulamento.\n");
    }
}
