#include <stdio.h>

int main(void) {
	
	int calificacion;
	
	printf("Ingrese la nota:");
	scanf("%d",&calificacion);
	
	if(calificacion >=90){
		
		printf("La calificacion es A\n");
		
	}else if(calificacion>=80 && calificacion<90){
		
		printf("La calificacion es B\n");
	
	}else if(calificacion>=70 && calificacion<80){
		
		printf("La calificacion es C\n");
		
	}else if(calificacion>=60 && calificacion<70){
		
		printf("La calificacion es D\n");
		
	}else{
		
		printf("La calificacion es F\n");
	}	
	
