#include <stdio.h>
#include <stdlib.h>
main()
{

    int s = 92, x, divisores;

    while (s <= 1478)
    {
        x = 1;
        divisores = 0;

        while (x <= s)
        {
            if (s % x == 0)
                divisores++;
            x++;
        }

        if (divisores == 2)
            printf("Numero primo: %i\n", s);
        s++;
    }
}
