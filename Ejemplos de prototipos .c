#include <stdio.h>

void cociente_y_resto(int num1,int num2,float *p, int *q);

int main()   
	
	int a,b;
	float p;
	int q;
	
	printf("Ingrese el primer numero:");
	scanf("%d",&a);
	
	printf("Ingrese el segundo numero:");
	scanf("%d",&b);
	
	cociente_y_resto(a, b, &p, &q);
	
	printf("El cociente es:%.2f\nEl resto es:%d", (float)p, q);
	return 0;
}	
  
    void cociente_y_resto(int num1, int num2, float *p, int *q){
	
     *p = (float)num1 / num2;
	 *q =num1 % num2;     
}
