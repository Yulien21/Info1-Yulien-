#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("Ingresar un numero que este entre el 1/100:");
	scanf("%d",&num);
	
	while (num<0 || num>100){
		
		printf("El numero esta fuera del rango\n");
		printf("Vuelva a ingresar:");
		scanf("%d",&num);
	}
		
	printf("OK"); 
	
	
	return 0;
}
