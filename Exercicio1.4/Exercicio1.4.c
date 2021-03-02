/* Exercício 1.4 - Slago-C */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declarando variáveis.
	float litros, consumo;
	int kmAnterior, kmAtual, kmSubtracao;
	short unsigned int op;

	//Limpando a tela.
	system("clear");


	//Primeiras considerações.
	printf("\n\n\t::::OBRIGADO POR USAR O TankCalc!::::\n");
	printf("\tO projeto ainda esta em desenvolvimento\n \te voce podera obter mais informacoes no repositorio\n\thttps://github.com/hgkPhDt/TankCalc \n");
	
	//Obtendo dados do veículo do usuário.
	printf("\n\n Seu veiculo tem opcao para zerar a quilometragem(km)? \n");
	printf("\t[1]Sim.\t[0]Nao.\n>> ");
	scanf("%hd", &op);

	switch(op){
		case 0:
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
				
				//Perguntando se o usuário quer refazer a operação.
				printf("\n Gostaria de refazer a operacao?\n \t[1]Sim. \t[0]nao.\n>> ");
				scanf("%hd", &op);

			}while(op==1);
		break;
		case 1:
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
				
				//Perguntando se o usuário quer refazer a operação.
				printf("\n Gostaria de refazer a operacao?\n \t[1]Sim. \t[0]nao.\n>> ");
				scanf("%hd", &op);

			}while(op==1);
		break;
		default:
			//Limpando a tela.
			system("clear");

			//Mensagem de erro.
			printf("\n\n Hm... Tem certeza que digitou corretamente?~ ");
	}

	//Limpando a tela.
	system("clear");

	//Imprimindo as finalizações.
	printf("\n\n\t::::TankCalc Finalizado::::\n\n\n");
	
	return 0;
}