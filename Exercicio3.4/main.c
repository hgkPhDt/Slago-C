#include <stdio.h>
#include <stdlib.h>

//Limpa Buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as variáveis
	float cm=2.54, pol;

	//Limpando o terminal
	system("clear");

	printf("\t -------------------------------------");
	//Laço de repetição contande de 1 á 10.
	for(pol = 1; pol <= 10; pol++){

		//Imprimindo na tela o valor de cada polegada em centimetros
		printf("\n\t | Polegada: %02.0f | Centrimetro: %05.2f |", pol, pol*cm);

	}
	
	printf("\n\t -------------------------------------");

	//Pulando a linha final
	printf("\n\n");
	return 0;
}
