#include <stdio.h>

int main(void) {
	
	float peso;
	float altura;
	float IMC;
	
	
	do {
		printf("Ingrese su peso en kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
			
		printf("El peso debe ser un número positivo\nVuelva a ingresar:");
		}
		
	} while (peso <= 0);
	
	do {
		printf("Ingrese su altura en metros: ");
		scanf("%f", &altura);
		if (altura <= 0) {
			
		printf("La altura debe ser un número positivo.\nvuelva a ingresar:");
		}
	} while (altura <= 0);
	

	IMC = peso / (altura * altura);
	
	printf("\nSu IMC es: %.2f\n", IMC);
	printf("Tabla de referencia del IMC:\n");
	
	if (IMC < 18.5) {
		printf("Clasificación: Bajo peso\n");
		printf("Usted se encuentra en la condición: Bajo peso\n");
	} else if (IMC <= 24.9) {
		printf("Clasificación: Normal\n");
		printf("Usted se encuentra en la condición: Normal\n");
	} else if (IMC <= 29.9) {
		printf("Clasificación: Sobrepeso\n");
		printf("Usted se encuentra en la condición: Sobrepeso\n");
	} else {
		printf("Clasificación: Obesidad\n");
		printf("Usted se encuentra en la condición: Obesidad\n");
	}
	
	
	return 0;
}

