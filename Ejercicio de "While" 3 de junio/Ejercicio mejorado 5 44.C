#include <stdio.h>

int main(void) {
	
	int cor = 0;
	int salto;
	int var;
	unsigned int var2;
	
	printf("Cuantos numeros quiere imprimir?:");
	scanf("%u",&var2);
	
	printf("Ingrese un numero por donde arrancar:");
	scanf("%d",&var); // <--- no olvidarse jamas el "&"
	
	printf("Cuantos numeros quiere por fila?:");
	scanf("%d",&salto);
	
     for(int i =var; i<=var2 ; i++){
		 
		printf("%d ", i);
		
		cor++;
	if(cor %salto == 0 ){
	
	printf("\n");
}	
	}
	
	return 0;
}
