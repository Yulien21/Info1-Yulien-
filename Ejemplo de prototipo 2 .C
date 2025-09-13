#include <stdio.h>

int suma(int num1, int num2);

int main(void){
	
	int a,b,c;
	
	printf("Ingrese el primer numero:");
	scanf("%d",&a);
	
	printf("Ingrese el segundo numero:");
	scanf("%d",&b);
	
	c = suma(a,b);
	
	printf("El valor de la suma es %d", c);
}	
	int suma(int num1, int num2){
    
	    int res;
		res = num1 + num2; 
	
return res;
}

