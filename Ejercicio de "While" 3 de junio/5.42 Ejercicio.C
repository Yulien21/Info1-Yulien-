#include <stdio.h>

int main(void) {
	
	int user1;
	
	printf("Ingrese un numero:");
	scanf("%d",&user1);	
	
	for (int f = user1;f > 0;f--){
		
		printf("%d ",f);
	}	
		for(int i = 0;i <= user1;i++){
			 
			printf("%d ",i);
	}	
	
	return 0;
}

