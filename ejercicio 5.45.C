#include <stdio.h>

int main(void) {
	
   unsigned int Filas,Columnas;
   
   int contador = 0;
   
   printf("Ingresar la cantidad de Filas:");
   scanf("%u",&Filas);
   
   printf("Ingresar la cantidad de Columnas:");
   scanf("%u",&Columnas);
	
	for(int i = 0; i < Filas;i++){
		for(int x = 0; x < Columnas; x++ ){
		
	  printf("%d ", contador); // <-- No olvidarse el punto y coma 
		contador++;
		}
	printf("\n");
	}
	
   
	
	return 0;
}

