#include <stdio.h>
#include <math.h>

unsigned  area_rectangulo(unsigned  longitud, unsigned  altura) {
	return longitud * altura;
}

unsigned  perimetro_rectangulo(unsigned  longitud, unsigned  altura) {
	return 2 * (longitud + altura);
}

unsigned  diagonal_rectangulo(unsigned  longitud, unsigned  altura) {
	return sqrt(pow(longitud, 2) + pow(altura, 2));
}


unsigned area_circulo(unsigned  radio) {
	return M_PI * pow(radio, 2);
}


unsigned perimetro_circulo(unsigned  radio) {
	return 2 * M_PI * radio;
}


void imp_resul(unsigned area, unsigned perimetro) {
	printf("El área es: %.2u\n", area);
	printf("El perímetro es: %.2u\n", perimetro);
}

int main(void) {
	int opcion;
	double  longitud, altura, radio;
	double  area, perimetro;
	
	printf("Ingrese la figura que desea calcular\n[1]rectángulo:\n[2]círculo:\n ");
	scanf("%d", &opcion);
	
	
	while (opcion != 1 && opcion != 2) {
		printf("Opción inválida. Vuelva a ingresar\n[1]rectángulo [2]círculo: ");
		scanf("%d", &opcion);
	}
	
	if (opcion == 1) {
		printf("Opción de rectángulo seleccionado\n");
		
		printf("Ingrese la longitud del rectángulo: ");
		scanf("%lf", &longitud);
		
		printf("Ingrese la altura del rectángulo: ");
		scanf("%lf", &altura);
	
		area = area_rectangulo (longitud, altura);
		perimetro = perimetro_rectangulo   (longitud, altura);
		
		printf("El área del rectángulo es: %.2lf[m^2]\n", area);
		
		printf("El perímetro del rectángulo es: %.2lf\n", perimetro);
		
		printf("La diagonal del rectángulo es: %.2u\n", diagonal_rectangulo(longitud, altura));
	} else {
		printf("Opción de círculo seleccionado\n");
		
		printf("Ingrese el radio del círculo: ");
		scanf("%lf", &radio);
		
		area = area_circulo(radio);
		perimetro = perimetro_circulo(radio);
		
		imp_resul(area, perimetro);
	}
	
	return 0;
}
