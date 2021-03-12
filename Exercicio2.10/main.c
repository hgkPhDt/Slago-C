#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#define BOLD   				"\x1B[1m"
#define BLUE_LIGHT       	"\x1B[94m"
#define GREEN  				"\x1B[32m"
#define RESET  				"\x1B[0m"

//Limpa buffer od Major Anilton
void limpabuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as varáveis
	float x, y;
	char opp,op;
	bool lup;

	//Iniciando laço de repetiçao
	do{

		//Limpando a tela do terminal
		system("clear");

		//Considerações iniciais
		printf(GREEN "\n\n\t:::::::::" RESET BLUE_LIGHT BOLD "Exercicio 2.10" RESET GREEN "::::::::\n" RESET);

		//Obtendo dados
		printf("\n Expressão? ");
		scanf("%f %c %f", &x, &opp, &y);

		//Iniciando o verificador de operação e realizando o mesmo.
		switch(opp){
			case '+':
				printf("\n valor = %.2f\n", x+y);
				break;
			case '-':
				printf("\n valor = %.2f\n", x-y);
				break;
			case '*':
				printf("\n valor = %.2f\n", x*y);
				break;
			case '/':
				printf("\n valor = %.2f\n", x/y);
				break;

			case ':':
				printf("\n valor = %.2f\n", x/y);
				break;

			default:
				printf("\n Operador inválido: %c\n",op);
		}

		//Verificando se o usuário vai continuar no programa
		printf("\n Deseja continuar [Y/n]?");
		scanf(" %c", &op);

		//Analisando e aplicando a opção que usuário escolheu
		if(tolower(op) == 'y') lup = true;
		else lup = false;

		//Limpando o buffer
		limpabuffer();

	//Finalizando laço de repetição
	}while(lup);


	//Limpando a tela do terminal
	system("clear");

	//Considerações finais
	printf(GREEN "\n\n\t:::::::::" RESET BLUE_LIGHT BOLD "ENCERRADO" RESET GREEN "::::::::\n\n" RESET);

 return 0;

}
