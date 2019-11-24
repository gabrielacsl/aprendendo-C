#include <stdio.h>
#include <stdlib.h>
main()
{

    int s = 1, x, soma;

    while (s <= 800)
    {
        x = 1;
        soma = 0;

        while (x < s)
        {
            if (s % x == 0)
                soma += x;
            x++;
        }

        if (soma == s)
            printf("Numero perfeito: %i\n", s);
        s++;
    }
}
