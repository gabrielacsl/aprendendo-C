#include<stdio.h>
#include<stdlib.h>
main(){
		float operacao, raio, area, perimetro;
	
	printf("Calcular\n\n");
	printf("1 -area da circunferência.\n2 - perimetro.\n");
		scanf("%f", &ope);
	printf("Raio:\n");
		scanf("%f", &raio);
		
	if (ope == 1) {
		area = (raio * raio) * 3.14159;
		printf("Area:%f\n", area);
	
	} else {
		perimetro = 2 * 3.14159 * raio;
		printf("Perimetro:%f\n", per);
	}
		
}
