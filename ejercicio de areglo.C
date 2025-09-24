#include <stdio.h>
#define N 10

int main (){
	int i;
	int a[N];

	printf("Ingrese [%d] numeros enteros:\n",N);
	
	for(i = 0;i < N;i++){
	
		printf("Numero %d:\n",i+1);
		scanf("%d", &a[i]);
    }
	
	for(i = 0;i < N;i++){
		
		if(a[i] < 0){
/*		a[i] = -a[i];	*/
		}
	}
	
	printf("Arreglo resultante:\n");
		for(i = 0;i < N;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	
	
return 0;
}
