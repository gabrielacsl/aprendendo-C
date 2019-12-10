#include <stdio.h>
main()
{
    int n, i = 0, p = 0, q = 0, v = 0, f = 0, d = 0, troco, valor = 0;

    scanf("%i", &n);
    for (i = 0; i <= n; i++)
    {
        valor = 0;
        scanf("%i", &p);
        for (f = 0; f < p; f++)
        {
            scanf("%i %i", &q, &v);
            valor = valor + (q * v);
        }
        scanf("%i", &d);
        troco = d - valor;
        if (valor > d)
        {
            printf("DINHEIRO INSUFICIENTE\n");
        }
        else
        {
            printf("%i\n", troco);
        }
    }
}