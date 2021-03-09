#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

//Limpeza de buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as variáveis
	short unsigned int e;
	unsigned char op;
	bool lup;

	do{
		//Limpar terminal
		system("clear");

		//Considerações iniciais
		printf("\n\t:::::Exercicio 2.6:::::\n");
		printf("\n Digamos que em um sistema foi encontrado um numero X de erros. ");
		printf("\n Na entrada de dados abaixo, digite um número de 1 a 10.");
		printf("\n Se for 1, retornará erro. Se for mais, retornará erros");

		//Obtendo dados
		printf("\n\n Digite um valor.\n O numero de erros: ");
		scanf("%hd", &e);

		//Operador condicional ? :
		//Se X for maior que Y, então execute X, caso contrário execute Y.
		e > 1 ? printf("\n %hd erros encontrados.\n", e) : printf("\n %hd erro encontrado.\n", e);


		//Verificando se o usuário deseja continuar no programa.
		printf("\n Deseja continuar [Y/n]? ");
		scanf(" %c", &op);

		if(tolower(op) == 'y') lup=true;
		else if(tolower(op) == 'n')lup = false;
		else if(op != 'n' && op != 'y') lup = false;

		//Limpando o buffer
		bufferClean();

	//Finalizando o laço de repetição
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf("\n\t:::::Encerrado:::::\n\n");

	return 0;
}
