#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main(){
float cotacao, dolar, reais;

printf("Cotacao diaria: ");
scanf("%f", &cotacao);

printf("Valor dolar: ");
scanf("%f", &dolar);	

reais=(dolar*cotacao);

printf("Valor em reais:%.2f\n", reais);	
	
	
	
}
