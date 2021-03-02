/* PERIM.C - informa o perímetro de uma circunferência */
#include <stdio.h>
#define PI 3.1415

int main(void){
	float raio, perim;

	//Solicita o raio da circunferência.	
	printf("Qual a medida do raio? ");   
    	scanf("%f", &raio);     

	//Calcula o seu perímetro
	perim = 2*PI*raio;

	printf("O perímetro é %.2f\n\a", perim);
	
	return 0;
}
