#include <stdio.h>

int main(void) {
	
	unsigned int var1;
	int nota,notas = 0;
	float prom;
	
	puts("Ingrese la cantidad de notas:");
	scanf("%u",&var1);
	
	printf("Si necesita salir,presione 11\n");
	
	for(int var2 = 0; var2 < var1;var2++) {
		
		do {
			printf("Ingrese la calificacion %d:",var2 + 1);
			scanf("%d",&nota);
			
		} while(nota < 0 || nota > 11);
		
		if(nota == 11){
			break;	
		}
		
		notas += nota;
	}
	
	printf("El promedio es %.2f\n",prom = (float) notas/var1);
	
	
	return 0;
}
