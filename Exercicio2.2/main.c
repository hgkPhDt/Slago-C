#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//Função do Major Anilton para "limpeza" de buffer
void cleanBuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as varáveis
	short unsigned int x,y;
	unsigned char op;
	bool lup;

	//Laço de repetição
	do{
		//Limpando o terminal
		system("clear");

		//Texto infromativo
		printf("\n\t:::::Qual numero e maior?:::::\n");
		printf("\t::::::::Exercicio 2.2:::::::::\n\n");


		//Obtendo dados
		printf(" Digite um valor: ");
		scanf("%hd", &x);
		printf(" Digite outra valor: ");
		scanf("%hd", &y);

		//Condicional verificando qual valor é maior que o outro
		if(x > y){
			printf("\n O valor %hd é maior que o valor %hd.\n", x,y);
			printf(" Simplificando: %hd > %hd.\n", x,y);
		}else if(y > x){
			printf("\n O valor %hd é maior que o valor %hd.\n", y,x);
			printf(" Simplificando: %hd > %hd.\n", y,x);
		}else{
			printf(" Não entendi muito bem esse valor informado.\n");
		}

		//Iniciar o pedido de repetição do programa
		printf("\n Deseja refazer a operação [Y/n]? ");
		scanf(" %c", &op);

		//Condicional para responder a resposta do usuário, conforme pediu
		if(tolower(op) == 'y'){
			lup = true;
		}else if(tolower(op) == 'n'){
			lup = false;
		}

		//Limpeza de buffer
		cleanBuffer();
	}while(lup);

	//Limpeza de terminal
	system("clear");

	//Considerações finais
	printf("\n\n \t:::::Encerrado:::::\n\n");

	return 0;
}
