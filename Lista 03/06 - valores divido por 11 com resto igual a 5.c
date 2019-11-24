#include <stdio.h>
#include <math.h>
main()
{
    int sequencia = 1000;
    printf("Divisiveis por 11 com resto igual a 5\n");

    while (sequencia <= 1999)
    {
        if (sequencia % 11 == 5)
        {
            printf("%i\n", sequencia);
        }
        sequencia++;
    }
}