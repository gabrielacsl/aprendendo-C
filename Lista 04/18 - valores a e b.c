#include "stdio.h"
#include "locale.h"
main(){
    int a, b, i;
    
    for (i = 0; i < 15; i++){
        printf("Valor a: ");
        scanf("%i", &a);
        printf("Valor b: ");
        scanf("%i", &b);

        if (a < b)
        {
            for (i = a; i <= b; i++)
            printf("%i\n", a);
        }

    }
}