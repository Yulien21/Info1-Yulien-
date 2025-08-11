#include <stdio.h>

int main(void) {
	
	int v1,v2;
	int nota,notas;
	float promedios;
	
	puts("Cuantas notas va a ingresar?: ");
	scanf("%d",&v2);
	
	notas = 0;
	v1 = 0;
	
	while (v1 < v2){
		
		do {
			printf("Ingrese la primer nota %d: ",v1 + 1);
			scanf("%d",&nota);
			
		} while(nota < 1 || nota > 10);
		notas += nota;
		v1++; 
	}
	 promedios = (notas / v2);
	
     printf("El promedio de la nota es: %.2f",promedios);
	
	
	
	return 0;
}
