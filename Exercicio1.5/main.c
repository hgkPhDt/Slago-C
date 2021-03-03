/*Exercício 1.5 - Slago-C - Imprime na tela os códigos ASCII do caractere cujo qual o usuário digitar.*/

#include <stdio.h>
#include <stdlib.h>	//system("clear");
#include <ctype.h> //toupper();
#include <stdbool.h>

// Limpar qualquer resíduo restante do standard input
// Função do Major Anilto
void limpabuffer() {
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main() {
	// Declaração das variáveis
	bool lup;
	unsigned char caracter, op;
	
	do {

		// Limpeza do terminal
		system("clear");
		
		// Texto informativo
		printf("\n\t\t:::::TABELA ASCII POR CARACTER:::::\n");
		  printf("\t\t:::::::::::Exercicio 1.5:::::::::::\n");
		  printf("\t\t:::::Tabela disponivel no link:::::\n\n    >  https://web.fe.up.pt/~ee96100/projecto/Tabela%%20ascii.htm  <\n");
													printf("_________________________________________________________________________\n");

		// Obtenção do caracter que se deseja ter em ASCII
		printf("\n Qual caracter deseja avaliar? ");
		scanf("%c", &caracter);
        
		// Obtenção do código ASCII em Octagonal, Decimal e Hexadecimal 
		printf("\tDecimal \tOctagonal \tHexadecimal \n  \t[%03d] \t\t[%04o] \t\t[0x%x]", caracter, caracter, caracter);
	   
	   	// Pergunta ao usuário se deseja continuar com o programa
        printf("\n\n Deseja continuar [Y/n]? ");
        scanf(" %c", &op);

		// Verificar se a variavel operadora recebeu y para continuar no programa
        if(toupper(op) == 'Y'){
            lup = true;
        }else{
            lup = false;
        }

        // Limpar qualquer vestígio/lixo no standard input
        limpabuffer();

    }while(lup);

    // Limpando o terminal
    system("clear");

	// Texto informativo
	printf("\n\t:::::Exercício 1.5::::::\n");
	  printf("\t:::::::Finalizado:::::::\n\n");

	return 0;
}