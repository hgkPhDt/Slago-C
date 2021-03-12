#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#define BOLD   				"\x1B[1m"
#define BLUE_LIGHT       	"\x1B[94m"
#define GREEN  				"\x1B[32m"
#define RED_LIGHT        	"\x1B[91m"
#define RESET  				"\x1B[0m"


//Limpa buffer do Major Anilton
void cleanBuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função principal
int main(){
	//Declarando as varáveis.
	double a,b,c,delta,x1,x2;
	unsigned char op;
	bool lup;

	//Laço de repetição
	do{
		//Limpando o terminal
		system("clear");
		
		//Considerações iniciais
		printf(GREEN "\n\n\t:::::::::" RESET BLUE_LIGHT BOLD "Exercicio 2.9" RESET GREEN "::::::::\n" RESET);
	    printf(GREEN "\t::::::" RESET RED_LIGHT BOLD "Formula de Bhaskara" RESET GREEN ":::::\n" RESET);
		printf(BOLD " \n Formula¹:" RESET " ax² + bx + c = 0");
		printf(BOLD "\n Formula²:" RESET " x = -b ± √b²-4.a.c /2.a");

		//Obtendo dados
		printf(BOLD"\n\n Informe os dados:\n"RESET);
		printf(" Valor do a: ");
		scanf("%lf", &a);
		printf(" Valor do b: ");
		scanf("%lf", &b);
		printf(" Valor do c: ");
		scanf("%lf", &c);

		//Obtendo o valor do discriminante
		delta = b*b - 4*a*b;

		//Obtendo o valor de x1 e x2
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);

		//Imprimindo o resultado
		if(delta > 0){
		printf(BOLD "\n Resultado:" RESET);
		printf("\n\t x¹ = %.2lf", x1);
		printf("\n\t x² = %.2lf\n", x2);
		}else printf("\n Não existe uma raiz quadrada! ");

		//Perguntando se o usuário deseja continuar 
		printf("\n\n Deseja continuar [Y/n]?");
		scanf(" %c", &op);

		//Condicional verificando a vontade do usuário
		if(tolower(op) == 'y') lup = true;
		else lup = false;

		//Limpando o buffer
		cleanBuffer();

	//Saindo do laço de repetição
	}while(lup);

	//Limpando o temrinal
	system("clear");

	//Considerações finais
	printf(GREEN "\n\n\t:::::::::" RESET BLUE_LIGHT BOLD "Exercicio 2.9." RESET GREEN "::::::::\n" RESET);
    printf(GREEN "\t:::::::::::" RESET RED_LIGHT BOLD "Encerrado." RESET GREEN "::::::::::\n\n" RESET);

   return 0;
}
