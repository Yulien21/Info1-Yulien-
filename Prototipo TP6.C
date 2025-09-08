#include <stdio.h>

// Función para calcular el valor absoluto
double mi_fabs(double valor) {
	return valor < 0 ? -valor : valor;
}

// Función para calcular la raíz cuadrada usando método de Newton-Raphson
double raiz_cuadrada(double num) {
	if (num < 0) {
		// La raíz cuadrada de un número negativo no está definida en los reales
		return -1; // Indica error
	}
	if (num == 0) {
		return 0;
	}
	double x = num;
	double error = 0.000001;
	double guess;
	while (1) {
		guess = 0.5 * (x + num / x);
		if (mi_fabs(guess - x) < error) {
			break;
		}
		x = guess;
	}
	return x;
}

double calcular_diagonal_rectangulo(double longitud, double altura) {
	double suma = longitud * longitud + altura * altura;
	return raiz_cuadrada(suma);
}

// Funciones para calcular área y perímetro
double calcular_area_rectangulo(double longitud, double altura) {
	return longitud * altura;
}

double calcular_perimetro_rectangulo(double longitud, double altura) {
	return 2 * (longitud + altura);
}

double calcular_area_circulo(double radio) {
	return 3.141592653589793 * radio * radio;
}

// Función para calcular el perímetro del círculo
double calcularPerimetroCirculo(double radio) {
	return 2 * 3.141592653589793 * radio;
}

// Función para imprimir resultados
void imprimirResultados(double area, double perimetro) {
	printf("El área es: %.2f\n", area);
	printf("El perímetro es: %.2f\n", perimetro);
}

int main() {
	int opcion;
	double longitud, altura, radio;
	double area, perimetro;
	
	printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
	scanf("%d", &opcion);
	
	// Validar opción
	while (opcion != 1 && opcion != 2) {
		printf("Opción inválida. Por favor, ingrese 1 para rectángulo o 2 para círculo: ");
		scanf("%d", &opcion);
	}
	
	if (opcion == 1) {
		printf("Opción de rectángulo seleccionada\n");
		printf("Ingrese la longitud del rectángulo: ");
		scanf("%lf", &longitud);
		printf("Ingrese la altura del rectángulo: ");
		scanf("%lf", &altura);
		// Cálculos
		area = calcular_area_rectangulo(longitud, altura);
		perimetro = calcular_perimetro_rectangulo(longitud, altura);
		printf("El área del rectángulo es: %.2f\n", area);
		printf("El perímetro del rectángulo es: %.2f\n", perimetro);
		printf("La diagonal del rectángulo es: %.2f\n", calcular_diagonal_rectangulo(longitud, altura));
	} else {
		printf("Opción de círculo seleccionada\n");
		printf("Ingrese el radio del círculo: ");
		scanf("%lf", &radio);
		// Cálculos
		area = calcular_area_circulo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		imprimirResultados(area, perimetro);
	}
	
	return 0;
}
