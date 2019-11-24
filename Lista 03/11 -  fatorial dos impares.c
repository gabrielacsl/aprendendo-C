#include <stdio.h>
main()
{

    int i = 1, n = 1, fatorial = 1;

    while (n <= 10)
    {
        i = 1;
        fatorial = 1;

        while (i <= n)
        {
            fatorial *= i;
            i++;
        }
        printf("Fatorial %i = %i\n", n, fatorial);
        n += 2;
    }
}