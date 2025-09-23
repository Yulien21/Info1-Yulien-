#include <stdio.h>  
int main() {
	
	unsigned int TAM;
	
	printf("Ingrese la cantidad de productos que va a cargar:");
	scanf("%u",&TAM);
/*----------------------------------------------------------------------------*/	
	int cod_barra[TAM];
	float precios[TAM];
	int z;
	int validar;
	printf("[Cargue los productos]:\n");
	
	for(z = 0;z < TAM;z++){
		
		do{
			printf("Ingresar el codigo de barras del producto %d:", z+1);
			validar = scanf("%d", &cod_barra[z]);
			
			if(validar != 1) {
				printf("Error: No sse permiten caracteres\nVuelva a ingresar:\n");
				while(getchar() != '\n'); 
				cod_barra[z] = -1; 
				continue;
			}
			if(cod_barra[z] <= 0 || cod_barra[z] > 999999999){
				
				printf("Codigo incorrecto (Debe ser positivo y de 9 digitos como maximo)\n vuelva a ingresar:\n");	
			}
		} while(cod_barra[z] <= 0 || cod_barra[z] > 999999999);
		
		do{
			printf("Ingrese el precio del producto %d:",z+1);
			validar = scanf("%f", &precios[z]);
			
			if(validar != 1) {
				printf("Error: No sse permiten caracteres\nVuelva a ingresar\n");
				while(getchar() != '\n'); 
				precios[z] = -1; 
				continue; 
			}
			if(precios[z] < 0){
				printf("El precio no puede ser negativo\nVuelva a ingresar:\n"); 
			}
		} while(precios[z] < 0);
	}	
	printf("\nLista de los productos cargada \n");	
	
	for(z = 0;z < TAM;z++){
		
		printf("Producto --> [%d]\nCodigo --> [%d]\nPrecios [%.2f]\n\n",z+1,cod_barra[z],precios[z]);
	}
	
	float precioMax = precios[0];
	float precioMin = precios[0];
	int codigoMax = cod_barra[0];
	int codigoMin = cod_barra[0];
	
	for(z = 1; z < TAM;z++) {
		
		if(precios[z] > precioMax){
			
			precioMax = precios[z];
			codigoMax = cod_barra[z];
		}
		if(precios[z] < precioMin){
			
			precioMin = precios[z];
			codigoMin = cod_barra[z];
		}
	}
	printf("\nResultados:\n");
	printf("Mayor Precio %.2f\nCodigo de barras %d\n", precioMax, codigoMax);
	printf("\nMenor Precio %.2f\nCodigo de barras %d", precioMin, codigoMin);
		
	return 0;
}
