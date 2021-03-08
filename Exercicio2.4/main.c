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
	//Declarando as varáveis
	double _Real,_absolut;
	unsigned char op;
	bool lup;

	//Laço de repetição do programa
	do{
		//Limpa tela
		system("clear");

		//Obtendo dados
		printf("\n Informe um valor: ");
		scanf("%lf", &_Real);

		//Condicional para avaliar se o número foi digitado é absoluto ou não
		//Se nao for, o mesmo converterá o número para o absoluto.
		if(_Real >= 0.0){
			//Saída de dados, com o número real e seu valor absoluto
			printf("\n O numero %f em seu estado absoluto e, %20.20f.", _Real, _Real);
		}else if(_Real ){
			_absolut = _Real * -1;
			//Saída de dados, com o número real e seu valor absoluto
			printf("\n O numero %f em seu estado absoluto e, %20.20f.", _Real, _absolut);
		}

		/* 	Existe uma regra na matemática que diz que todo numero negativo, multiplicado por menos um,
		 * sera o mesmo valor, mas com o sinal invertido. Se for positivo, passará a ser negativo e vice-versa.
		 * 	A função abs(); da biblioteca math também poderia fazer esse papel.
		*/

		//Verificando se o usuário vai continuar no programa
		printf("\n\n Deseja continuar [Y/n]? ");
		scanf(" %c", &op);

		//Condicional para verificar se o usuário vai continuar no programa
		if(tolower(op) == 'y'){
			lup = true;
		}else if(tolower(op) == 'n'){
			lup = false;
		}else{
			printf("\n Hm... Acho que esse comando nao existe.\n");
		}

		//Limpeza de buffer
		bufferClean();
	//Finalizado o laço de repetição
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf("\n\t::::::ENCERRADO::::::\n\n");

	//Finalizando o programa
	return 0;
}

