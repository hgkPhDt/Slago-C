/* Exercício 2.11 - Slago-C - Indica qual o peso ideal para um homem ou uma mulher mediante a sua altura */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#define BOLD 	 "\x1B[1m"
#define RESET 	 "\x1B[0m"
#define BLUE     "\x1B[34m"
#define GREEN    "\x1B[32m"

//Limpa buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as varáveis
	float alt_M, alt_H, _xx, _xy;
	unsigned char op, _xxxy;
	bool lup;

	//Iniciando laço de repetição
	do{
		// Limpando o terminal
		system("clear");

		//Considerações iniciais
		printf(GREEN BOLD "\n\n\t::::::" RESET BLUE BOLD "Exercício 2.11" RESET GREEN BOLD ":::::" RESET);


		//Obtendo os dados
		printf("\n\n Primeiro, preciso saber se você é Homem ou Mulher.\n Digite [M] para Mulher e [H] para Homem. ");
		printf("\n Eu sou: ");
		scanf(" %c", &_xxxy);

		//Condicional para verificar o sexo do usuário
		//O usuário é homem
		if(tolower(_xxxy) == 'h'){
			//Obtendo a altura do usuário Homem
			printf("\n Você me disse que é homem.\n Agora, me diga a vossa altura [ex:1.76]? ");
			scanf("%f", &alt_H);

			//Fazendo o cálculo para homem, da apostila
			_xy = 72.7 * alt_H - 58;
			printf("\n Seu peso ideal é: %.0f", _xy);

			//Segundo pesquisas, o peso pode variar de -11 e +9
			_xy -= 11;
			printf("\n Porém, pode ser considerado saudável um peso entre %.0f e ", _xy);
			_xy += 20;
			printf("%.0f\n", _xy);
		}
		//O usuário é mulher
		else if(tolower(_xxxy) == 'm'){
			//Obtendo a altura do usuário Mulher
			printf("\n Você me disse que é mulher.\n Agora, me diga a vossa altura [ex:1.65]? ");
			scanf("%f", &alt_M);

			//Fazend o cálculo para mulher, da apostila
			_xx = 62.1 * alt_M - 44.7;
			printf("\n Seu peso ideal é: %.0f", _xx);

			//Segundo pesquisas, o peso pode variar de -7 e +13
			_xx -= 7;
			printf("\n Porém, pode ser considerador saudável um peso entre %.0f e ", _xx);
			_xx += 20;
			printf("%.0f\n", _xx);

		}
		//Caso o sexo não exista
		else printf("\n O sexo escolhido foi %c.\n Mas eu desconheço esse sexo.\n", _xxxy);

	//Perguntando se o usuário vai ficar no programa
	printf("\n Deseja continuar no programa [Y/n]? ");
	scanf(" %c", &op);

	//Verificando a opção que o usuário escolheu
	if(tolower(op) == 'y') lup = true;
	else lup = false;

	//Finalizando o laço de repetição
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf(GREEN BOLD "\n\n\t::::::" RESET BLUE BOLD "Encerrado!" RESET GREEN BOLD ":::::\n\n" RESET);

	return 0;
}
