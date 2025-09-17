#include<stdio.h>


float valance_notas(float n1,float n2,float n3);

int main() {

  double not1,not2,not3,notfinal;

   printf("Ingrese la primera nota:");
   scanf("%lf", &not1);
   
   printf("Ingrese la segunda nota:");
   scanf("%lf", &not2);
   
   printf("Ingrese la tercera nota:");
   scanf("%lf", &not3);
  
 notfinal = valance_notas(not1,not2,not3);
   
   printf("\nLa nota final es:%.2f", notfinal);
}
	float valance_notas(float n1,float n2,float n3){
	
	float n4 = n1 * 0.3 + n2 * 0.3 + n3 * 0.4; 	
	return n4;  
}
