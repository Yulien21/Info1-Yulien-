#include <stdio.h>

int main(void) {
	
	unsigned int Carbono,Hidrogeno,Oxigeno;
	unsigned int Agua = 0,CO2 = 0,Glucosa = 0;
	
	puts("Ingrese la cantidad de Carbono:");
	scanf("%u",&Carbono);
	
	puts("Ingrese la cantidad de Hidrogeno:");
	scanf("%u",&Hidrogeno);
	
	puts("Ingrese la cantidad de Oxigeno:");
	scanf("%u",&Oxigeno);
	
	Glucosa = Carbono/6;
	if(Glucosa >= Hidrogeno/12 && Glucosa >= Oxigeno/6){
		
		Hidrogeno -= Glucosa *12;
		Oxigeno   -= Glucosa *6;
		Carbono   -= Glucosa *6;
	}
	
	Agua = Hidrogeno/2;
	if(Agua >= Oxigeno){
	
	Hidrogeno -= Agua * 2;
	Oxigeno   -= Agua * 1;
	}
	CO2 = Carbono;
	if(CO2 >= Oxigeno/2){
		
	Carbono -= CO2 *1;
	Oxigeno -= CO2 *2;
	}
    
	
	if(Carbono == 0 && Hidrogeno == 0 && Oxigeno == 0){
		
		printf("%u %u %u\n",Glucosa,Agua,CO2);
	} else {
		puts("Error\n");
	}
	
	
	return 0;
}

