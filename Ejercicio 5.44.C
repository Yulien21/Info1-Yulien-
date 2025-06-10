#include <stdio.h>

int main(void) {
	int num;
	int salto;
	int cor = 0;  
	
	printf("Ingrese un número: ");
	scanf("%d", &num);
	
	
	printf("cuantos numeros quiere por fila?: ");
	scanf("%d", &salto);
	
	
	for (int i = num; i >= 0; i--) {
		printf("%d ", i); // <--- Dejar espacionen el (%d) si no el programa no va como deberia
		
		cor++;
		if (cor % salto == 0) {
			printf("\n");
		}
	}
	
	
	for (int i = 1; i <= num; i++) {
		printf("%d ", i); // <--- Dejar espacionen el (%d) si no el programa no va como deberia
		
		cor++;
		if (cor % salto == 0) {
			printf("\n");
		}
	}
	
	if (cor % salto != 0) {
		printf("\n");
	}
	
	return 0;
}

