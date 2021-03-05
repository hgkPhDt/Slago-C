/* Exercício 1.7 - Slago-C - Obtendo a Hipotenusa através do Cateto Oposto e o Cateto Adjacente*/

#include <stdio.h> //Padrão
#include <stdlib.h> //system("clear");
#include <math.h> //Operações matemáticas
#include <stdbool.h> //Tipo de dado primitivo booleano
#include <ctype.h> //tolower(op);

//Função do Major Anilton para "limpeza" de buffer
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função principal
int main() {
	//Declarando as variáveis
	double x,co,ca,x_raiz,ca_ADJACENTE,co_OPOSTO;
	unsigned char op;
	bool lup;

	//Sistema de repetição para o usuário continuar no programa.
	do{
		//Limpando a tela
		system("clear");

		//Considerações iniciais
		printf("\n\t::::Hipotenusa:::::\n");
		printf("\t:::Exercicio 1.7:::\n\n");

		//Obtendo os dados
		printf(" Cateto oposto: ");
		scanf("%lf", &co_OPOSTO);
		printf(" Cateto adjacente: ");
		scanf("%lf", &ca_ADJACENTE);

		//Fazendo a operação no Teorema de Pitágoras
		co = pow(co_OPOSTO,2);
		ca = pow(ca_ADJACENTE,2);
		x_raiz = co + ca;

		//Resultado final
		printf(" A Hipotenusa e: %.2lf\n", sqrt(x_raiz));

		//Obtendo a informacao de repetição
		//Y para sim
		//N para não
		printf("\n Refazer a operacao [Y/n]? ");
		scanf(" %c", &op);

		//Condicional, verificando se o dado que o usuário digitou confere
		if(tolower(op) == 'y'){
			lup = true;
		}else if(tolower(op) == 'n'){
			lup = false;
		}else{
			printf("\n\n ~ Desculpe, mas esse comando nao me pertence.");
		}

		//Limpando o buffer
		bufferClean();

	//Finalizando o loop caso a variável lup receba o valor false 
	}while(lup);

	//Limpando a tela
	system("clear");

	//Informativo final
	printf("\n\t::::Hipotenusa::::\n\n");

return 0;
}
