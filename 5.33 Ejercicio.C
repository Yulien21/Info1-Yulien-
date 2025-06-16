#include <stdio.h>

int main(void) {
	
	int var1;
	
	printf("Ingrese un numero negativo:");
	scanf("%d",&var1);
	
	while(var1 >= 0){
		
	printf("El numero ingresado no es negativo\nVuelva a ingresar:");
	scanf("%d",&var1);
	}
	
	printf("Gracias!!\nsu numero ingresado fue: %d",var1);
	
	
	
	
	return 0;
}

