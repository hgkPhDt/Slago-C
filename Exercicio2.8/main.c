#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#define APROVADO 7.0
#define REPROVADO 3.0
#define BOLD     "\x1B[1m"
#define FAINT	 "\x1B[2m"


#define RED   	 "\x1B[31m"
#define YELLOW   "\x1B[33m"
#define BLUE   	 "\x1B[34m"
#define RESET 	 "\x1B[0m"

//Limpa buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main(){
	//Declarando as variáveis
	float p_NOTA, s_NOTA, _MEDIA;
	unsigned char op;
	bool lup;

	do{
		//Limpando o terminal
		system("clear");

		//Considerações iniciais
		printf("\n\n\t:::::Exercicio 2.8:::::\n");
		
		//Obtendo informações do aluno
		printf("\n Prencha abaixo, as notas do aluno.");
		printf("\n Primeira nota: ");
		scanf("%f", &p_NOTA);
		printf(" Segunda nota: ");
		scanf("%f", &s_NOTA);

		//Calculando a média do aluno
		_MEDIA = (p_NOTA + s_NOTA)/2;

		printf("\n MEDIA: %.1f", _MEDIA);
		//Informando se o aluno está ou não aprovado, em recuperação ou sem salvação
		if(_MEDIA >= APROVADO) printf(BLUE BOLD FAINT "\n Aprovado." RESET);
		else if(_MEDIA <= APROVADO && _MEDIA > REPROVADO) printf(YELLOW BOLD "\n Em recuperação." RESET);
		else if(_MEDIA <= REPROVADO) printf(RED BOLD "\n Reprovado." RESET);
		
		//Verificando se o usuário vai continuar no programa
		printf("\n\n Deseja continuar [Y/n]?");
		scanf(" %c", &op);
	
		//Condicional avaliando a resposta do usuário
		if(tolower(op) == 'y') lup = true;
		else if(op != 'y') lup = false;

	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf("\n\n\t:::::Exercicio 2.8:::::\n");
	    printf("\t:::::::Encerrado:::::::\n\n");


}

