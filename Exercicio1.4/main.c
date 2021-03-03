/* Exercício 1.4 - Slago-C - Calcula quantos KM um veiculo faz com um litro de combustível. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //toupper();
#include <stdbool.h>

void limpabuffer() {
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){
	//Declarando variáveis.
	float litros, consumo;
	unsigned int kmAnterior, kmAtual, kmSubtracao;
	unsigned char op;
	bool lup;

	//Limpando a tela.
	system("clear");


	//Primeiras considerações.
	printf("\n\n\t::::Exercicio 1.4::::\n");
		printf("\t::Apostila: Slago-C::\n");
	
	//Obtendo dados do veículo do usuário.
	printf("\n\n Seu veiculo tem opcao para zerar a quilometragem(km)[Y/n]? ");
    scanf(" %c", &op);

    //Verificar se a variavel operadora recebeu y para continuar no programa.
    if(toupper(op) == 'N'){
        lup = true;

        do{
			//Limpando a tela.
			system("clear");


			//Primeiras considerações.
			printf("\n\n\t:::::NÃO UTILIZAR PONTOS E VIRGULAS:::::\n");
			
			//Obtendo dados sobre a quilometragem do usuário.
			printf(" Quantos Km seu veiculo tinha antes de abastecer? ");
			scanf("%d", &kmAnterior);
			printf(" Quantos Km seu veiculo tem agora? ");
			scanf("%d", &kmAtual);
			printf(" Quantos litros havia no tanque? ");
			scanf("%f", &litros);

			//Calculando quantos Km o usuário percorreu com o veículo.
			kmSubtracao = kmAtual - kmAnterior;

			//Calculando o consumo.
			consumo = kmSubtracao / litros;

			//Informando a operação de consumo.
			printf("\n Se seu veículo percorreu %dKm e consumiu %.0fL.\n", kmSubtracao, litros);
			printf(" Então seu veículo fez %.2fL por Km.\n", consumo);
			
			// Verificar se o utilizador pretende obter o código ASCII de mais algum caracter
	        printf("\n\n Deseja continuar [Y/n]? ");
	        scanf(" %c", &op);

	        //Verificar se a variavel operadora recebeu y para continuar no programa.
	        if(toupper(op) == 'Y'){
	            lup = true;
	        }else{
	            lup = false;
	        }

	        // Limpar qualquer vestígio/lixo no standard input
			limpabuffer();

		}while(lup);

    }else if(toupper(op) == 'Y'){
        lup = false;
        do{
			//Limpando a tela.
			system("clear");

			//Primeiras considerações.
			printf("\n\n\t:::::NÃO UTILIZAR PONTOS E VIRGULAS:::::\n");

			//Obtendo dados sobre a quilometragem.
			printf(" Quantos Km voce percorreu com o seu veiculo? ");
			scanf("%d", &kmAtual);
			printf(" Quantos litros havia no tanque? ");
			scanf("%f", &litros);

			//Calculando o consumo
			consumo = kmAtual / litros;

			//Informando a operação de consumo.
			printf("\n Se seu veículo percorreu %dKm e consumiu %.0fL.\n", kmAtual, litros);
			printf(" Então seu veículo fez %.2fL por Km.\n", consumo);
			
			// Verificar se o utilizador pretende obter o código ASCII de mais algum caracter
	        printf("\n\n Deseja continuar [Y/n]? ");
	        scanf(" %c", &op);

	        //Verificar se a variavel operadora recebeu y para continuar no programa.
	        if(toupper(op) == 'Y'){
	            lup = true;
	        }else{
	            lup = false;
	        }

	        // Limpar qualquer vestígio/lixo no standard input
    		limpabuffer();
		
		}while(lup);

    }else{
    	
    	//Mensagem de erro.
		printf("\n\n Hm... Tem certeza que digitou corretamente?~ ");
    }

	//Imprimindo as finalizações.
	printf("\n\n\t::::Exercicio 1.4:::::\n");
		printf("\t::::::Finalizado::::::\n\n");
	
	return 0;
}