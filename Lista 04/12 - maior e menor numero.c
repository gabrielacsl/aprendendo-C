#include <stdio.h>
main()
{
    float meses, saldoa, saldob, saldo;

    printf("Saldo : \n");
    scanf("%f", &saldo);

    saldoa = saldo;
    saldob = saldo;

    while (saldob - saldoa <= 1000)
    {
        saldoa += saldoa * 0.0065;
        saldob += saldob * 0.0088;
        meses++;
    }
    printf("Meses: %.f\n", meses);
}
