#include <stdio.h>
	
int main(void) {
	
float num1,num2;
int var1;

puts("Ingrese dos numero:");
scanf("%f",&num1);
scanf("%f",&num2);

puts(" seleccione una operacion:\n1: Suma\n2: Resta\n3: Multiplicacion\n4: Division\n5 Salir \n");
scanf("%d",&var1);	


switch(var1){

case 1:
	printf("Suma: %.2f\n",num1 + num2);
    break;
case 2:
	printf("Resta:%.2f\n",num1 - num2);
	break;
case 3:
	printf("Multiplicacion:%.2f\n",num1 * num2);
	break;
	
case 4:
	printf("Division:%.2f\n",num1 / num2);
	break;

default:
	while(var1 != 5);
	puts("OK");
	break;
	
}
	return 0;
}
