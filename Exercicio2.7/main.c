#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

//Limpa buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando variáveis
	short unsigned int x;
	unsigned char op;
	bool lup;

	//Laço de repetição
	do{
		//Limpa o terminal
		system("clear");

		//Considerações iniciais
		printf("\n\n\t:::::Exercicio 2.7:::::\n");
		printf("\n Qualquer valor acima de zero, sera verdadeiro.");


		//Obtendo dados
		printf("\n\n Informe um valor: ");
		scanf("%hd", &x);

		//Ternário/Operador Condicional para verificar o valor informado
		x < 1 ? printf(" O valor informado é falso.\n") : printf(" O valor informado é verdadeiro.\n");

		//Verificando se o usuário vai continuar no programa ou não
		printf("\n Deseja continuar [Y/n]");
		scanf(" %c", &op);

		//Validando a resposta do usário
		if(tolower(op) == 'y') lup = true;
		else if(tolower(op) == 'n') lup = false;
		else if(op != 'y' && op != 'n') lup = false;

		//Limpando o buffer
		bufferClean();
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf("\n\n\t:::::Exercicio 2.7:::::");
	  printf("\n\t:::::::Encerrado:::::::\n\n");

	return 0;
}
