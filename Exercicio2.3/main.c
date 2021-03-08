#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

//Limpeza de buffer do Major Anilton
void cleanBuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as variáveis
	double ano_GREGORIANO = 365.2425;
	short unsigned int ano_INPUT;
	unsigned char op;
	bool lup;

	//Inicio do laço de repetição
	do{
		//Limpando o terminal
		system("clear");

		//Texto informativo
		printf("\n\n\t\t\t:::::ANO BISSEXTO:::::");
		printf("\n\t\t\t:::::Exercicio2.3:::::");
		printf("\n\t\t\t:::Fonte do cálculo::: ");
		printf("\n  >  www.escolakids.uol.com.br/matematica/calculo-do-ano-bissexto.htm  <  \n");
		printf(" ______________________________________________________________ \n\n");

		//Obtendo os dados para a operação
		printf(" Que ano deseja avaliar? ");
		scanf("%hd", &ano_INPUT);

		//Verificando se o ano digitado é bissexto ou não
		if(ano_INPUT % 4 && ano_INPUT % 400){
			printf(" O ano informado não é bissexto");
		}else{
			printf(" O ano informado é bissexto");
		}

		//Perguntando se o usuário deseja refazer a operação acima
		printf("\n\n Deseja refazer a operacao [Y/n]? ");
		scanf(" %c", &op);

		//Condicional para verificar o comando desejado pelo usuário
		if(tolower(op) == 'y'){
			lup = true;
		}else if(tolower(op) == 'n'){
			lup = false;
		}else{
			printf("\n\n Perdoe-me, mas o comando informado e invalido.\n\n");
		}


		//Limpando o buffer
		cleanBuffer();

	//Terminando o loop
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf("\n\n\t:::::Encerrado:::::\n\n");
}
