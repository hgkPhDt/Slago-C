#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

//Limpa buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as variáveis
	float salario, slr_PORCENTAGEM, slr_AJUSTE;
	unsigned char op;
	bool lup;

	//Laço de repetição
	do{
		//Limpando o terminal
		system("clear");

		//Obtendo os dados
		printf("\n Qual o valor do seu salario? ");
		scanf("%f", &salario);
		printf(" Qual porcentagem do reajuste? ");
		scanf("%f", &slr_PORCENTAGEM);

		//Avaliando o salário do funcionário.
		//Se for menor ou igual a R$ 750.00 reais.
		//O mesmo receberá um bônus de R$ 100.00 reais.
		if(salario <= 750.00){
			slr_AJUSTE = (salario * slr_PORCENTAGEM/100) + 100;
			printf("\n Seu salario de R$ %.2f reais, teve %.2f%% de reajuste.\n", salario, slr_PORCENTAGEM);
			printf(" Voce recebeu R$ 100.00 reais de bonus.\n");
			printf(" Voce passara a receber R$ %.2f reais\n", slr_AJUSTE + salario);

		}else if(salario > 750.00){
			slr_AJUSTE = salario * slr_PORCENTAGEM/100;
			printf("\n Seu salario de R$ %.2f reais, teve %.2f%% de reajuste.\n", salario, slr_PORCENTAGEM);
			printf(" Voce passara a receber R$ %.2f reais\n", slr_AJUSTE + salario);
		}

		//Verificando se o usuário deseja continuar no programa
		printf("\n Deseja continuar [Y/n]? ");
		scanf(" %c", &op);


		//Verificando e aplicando a resposta do usuário
		if(tolower(op) == 'y'){
			lup = true;
		}else if(tolower(op) == 'n'){
			lup = false;
		}else{
			printf("\n Comando nao encontrado.\n\n");
		}

	//Saindo do laço de repetição
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Condiderações finais
	printf("\n\n\t::::::Exercício 2.5::::::\n");
	    printf("\t::::::::Encerrado::::::::\n\n");

}
