#include <stdio.h>

int main(void) {
	
	unsigned int Alumnos;
	float prom;
	float calificacion;
	float suma = 0;
	float calificacion_max = -1; 
	float calificacion_min = 101; 
	
	do {
		puts("Ingrese la cantidad de estudiantes: ");
		scanf("%u", &Alumnos);
		if (Alumnos <= 0) {
			puts("La cantidad de estudiantes debe ser un número positivo:\n");
		}
	} while (Alumnos <= 0);
	
	
	for (int i = 0; i < Alumnos; i++) {
		do {
			printf("Ingrese la calificación de los estudiantes %d (0/100): ", i + 1);
			scanf("%f", &calificacion);
			
			
			if (calificacion < 0 || calificacion > 100) {
				printf("La calificación debe estar entre 0 y 100\nVuelva a ingresar:");
			}
			
		} while (calificacion < 0 || calificacion > 100);
		
		suma += calificacion;
		
		
		if (calificacion > calificacion_max) {
			calificacion_max = calificacion;
		}
		
		if (calificacion < calificacion_min) {
			calificacion_min = calificacion;
		}
	}
	prom = suma/Alumnos;
	printf("\nProm de calificaciones: %.2f\n", prom);
	
	
	printf("La calificación más alta es: %.2f\n", calificacion_max);
	printf("La calificación más baja es: %.2f\n", calificacion_min);
	
	return 0;
}
