#include <stdio.h>

int main(void) {
	
	float peso;
	float altura;
	float IMC;
	
	printf("Ingrese su peso en kg");
	scanf("%f",&peso);
	
	printf("Ingrese su altura en metros");
	scanf("%f",&altura);
	
	if (altura>0){
		
		IMC = peso/(altura*altura);
		
		printf("Su IMC es: %.2f\n",IMC);
		
		printf("Tabla de referencia del IMC:\n");
		//Clasificación
		if (IMC < 18.5) {
			printf("Clasificación: Bajo peso\n");
		} else if (IMC >= 18.5 && IMC <= 24.9) {
			printf("Clasificación: Normal\n");
		} else if (IMC >= 25.0 && IMC <= 29.9) {
			printf("Clasificación: Sobrepeso\n");
		} else if (IMC >29.9){
			printf("Clasificación: Obesidad\n");
		  
		}

	}
	
	return 0;
}
