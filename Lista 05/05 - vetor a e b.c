#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int a[30], b[30], i;

    for (i = 0; i < 30; i++)
    {
        a[i] = rand() % 149 + 1;

        if (a[i] = i % 2 == 1)
        {
            b[i] = a[i] / 2;
            printf("A[%i] = B %i \n\n", a[i], b[i]);
        }
        else
        {
            b[i] = a[i] / 3;
            printf("A[%i] = B %i \n\n", a[i], b[i]);
        }
    }
}