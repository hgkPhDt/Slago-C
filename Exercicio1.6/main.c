/*Exercicio 1.6 - Slago-C - Conversão de graus fahrenheit para celsius*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //toupper(op)
#include <stdbool.h>

// Limpa buffer do Major Anilton!
void limpabuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main(){
	
	// Declarando as variáveis.
	short int fahrenheit, celsius;
	unsigned char op;
	bool lup;
	
	do{
		
		//Limpando a tela
		system("clear");

		//Texto informativo
		printf("\n \t::::::CONVERSAO DE FAHRENHEIT PARA CELSIUS::::::");
		printf("\n \t::::::::::::::::::Exercicio 1.6:::::::::::::::::\n");

		//Perguntando ao usuário se ele deseja fazer a conversão de ºF para ºC
		printf("\n Deseja fazer a conversao de fahrenheit para celsius [Y/n]? ");
		scanf("%c", &op);

		//Condicional para fazer as conversões desejadas pelo usuário.
		if(toupper(op) == 'Y'){

			//Limpando o buffer para evitar erros neste processo.
			limpabuffer();

			//Obtendo os graus em fahrenheit.
			printf("\n Digite o grau em fahrenheit: ");
			scanf("%hd", &fahrenheit);

			//Convers~ao de fahrenheit para celsius.
			celsius = (fahrenheit - 32) / 1.8;

			//Output da conversão de fahrenheit para celsius
			printf(" A temperatura de fahrenheit (%hdºF) para celsius é: %hdºC\n", fahrenheit, celsius);

		}else if(toupper(op) == 'N'){

			//Limpando o buffer para evitar erros neste processo.
			limpabuffer();

			//Obtendo os graus em fahrenheit.
			printf(" Deseja fazer a conversao de celsius para fahrenheit [Y/n]? ");
			scanf("%c", &op);

			//Condicional verificando se o usuário vai querer fazer a conversão antes citada.
			if(toupper(op) == 'Y'){

				//Solicitando os dados em celsius
				printf("\n Digite o grau em celsius: ");
				scanf("%hd", &celsius);

				//Conversão de celsius para fahrenheit.
				fahrenheit = (celsius * 1.8) +32;;

				//Output da conversão de fahrenheit para celsius
				printf(" A temperatura de celsius (%hdºC) para fahrenheit é: %hdºF\n", celsius, fahrenheit);

			}else{

				//Finaliando o programa
				printf(" Desculpe, esse comando nao pode ser processado.");
			}

		}else{

			//Finalizando o programa
			printf(" Desculpe, esse comando nao pode ser processado.");
		}

		//Verificando se o usuário deseja refazzer a conversão de temperatura.
		printf("\n\n Deseja refazer a operação[Y/n]? ");
		scanf(" %c", &op);

		//Condicional para fazer o loop.
		if(toupper(op) == 'Y'){
			lup = true;
		}else if(toupper(op) == 'N'){
			lup = false;
		}else{
			printf(" Desculpe, esse comando nao pode ser processado.");
		}

		//Limpando o buffer
		limpabuffer();
			
	}while(lup);

	//Limpando o terminal
	system("clear");


	//Texto informativo
	printf("\n \t::::::CONVERSAO DE FAHRENHEIT PARA CELSIUS::::::");
	printf("\n \t::::::::::::::::::Exercicio 1.6:::::::::::::::::\n");
	printf("\n \t::::::::::::::::::::Encerrado:::::::::::::::::::\n\n");

}