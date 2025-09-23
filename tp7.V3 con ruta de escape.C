#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	unsigned int MAX;
	
	printf("¿Cuantos productos quiere cargar?:");
	scanf("%u",&MAX);
//------------------------------------------------------------------------------	
	int cod_barra[MAX];
	float precios[MAX];
	int z = 0;
	char entrada[50];
	int validar;
	
	printf("Ingrese los productos (escriba 'x' para terminar la carga):\n");
	
	while (z < MAX) {
		printf("Ingresar el codigo de barras del producto %d: ", z + 1);
		scanf("%s", entrada);
		
		if (strcmp(entrada, "x") == 0 || strcmp(entrada, "X") == 0) {
			break; // termina la carga
		}
		
		validar = sscanf(entrada, "%d", &cod_barra[z]);
		if (validar != 1 || cod_barra[z] <= 0 || cod_barra[z] > 999999999) {
			printf("Codigo incorrecto. Debe ser positivo y de hasta 9 dígitos.\n");
			continue; // vuelve a pedir el código
		}
		
		do {
			printf("Ingrese el precio del producto %d: ", z + 1);
			validar = scanf("%f", &precios[z]);
			if (validar != 1 || precios[z] < 0) {
				printf("Error: ingrese un precio válido.\n");
				while (getchar() != '\n'); // limpiar buffer
				precios[z] = -1;
				validar = 0;
			}
		} while (validar != 1 || precios[z] < 0);
		
		z++; // solo avanza si se cargó correctamente
	}
	
	int TAM = z;
	
	if (TAM == 0) {
		printf("No se cargaron productos.\n");
		return 0;
	}
	
	printf("\nLista de los productos cargados:\n");
	for (z = 0; z < TAM; z++) {
		printf("Producto --> [%d]\nCodigo --> [%d]\nPrecio --> [%.2f]\n\n", 
			   z + 1, cod_barra[z], precios[z]);
	}
	
	float precioMax = precios[0];
	float precioMin = precios[0];
	int codigoMax = cod_barra[0];
	int codigoMin = cod_barra[0];
	
	for (z = 1; z < TAM; z++) {
		if (precios[z] > precioMax) {
			precioMax = precios[z];
			codigoMax = cod_barra[z];
		}
		if (precios[z] < precioMin) {
			precioMin = precios[z];
			codigoMin = cod_barra[z];
		}
	}
	
	printf("\nResultados:\n");
	printf("Mayor Precio: %.2f\nCodigo de barras: %d\n", precioMax, codigoMax);
	printf("Menor Precio: %.2f\nCodigo de barras: %d\n", precioMin, codigoMin);
	
	return 0;
}
