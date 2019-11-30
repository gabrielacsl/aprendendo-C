#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    srand(time(NULL));
    int a[30], i, n, maior = 0;

    printf("\nDigite um valor: ");
    scanf("%i", &n);

    for (i = 0; i < 30; i++)
    {
        a[i] = rand() % 101 + 100;

        if(a[i] < n){
            a[i] = 0;
        }
        else {
            maior++;
        }
        printf("a[%i] = %i\n", i, a[i]);
    }
    printf("Porcentagem dos numeros maiores: %i%%", maior * 100 / i);

}