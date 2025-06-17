#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("Ingresar un numero par positivo:");
	scanf("%d",&num);
	
	while (num %2 !=0 || num < 0){ // <--utilizado para hacer condiciones pares/impares
		
		printf("El numero ingresado debe ser par y positivo\n");
		printf("Vuelva a ingresar:");
		scanf("%d",&num);
	}
		
	printf("Good"); 
	
	
	return 0;
}
