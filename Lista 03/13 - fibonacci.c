#include <stdio.h>
#include <stdlib.h>
main()
{
    int i, a, b, c, total;

    printf("valor A e valor B: \n");
    scanf("%i %i", &a, &b);

    printf("%i, %i, ", a, b);

    for (i = 2; i < 25; i++)
    {
        c = a + b;
        total += c;
      printf("%i\n", c);
      a = b;
      b = c;
    }
    printf("Soma: %i\n", total);
}
