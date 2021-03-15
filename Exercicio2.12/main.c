/* Exercício 2.12 - Slago-C - Informa o perfil da pessoa com a data de nascimento */

/* Este programa foi o que mais me forçou a buscar meios para solucionar o exercício.
 * Não sei se o silvio pretendia que fosse feito dessa forma, mas foi a solução mais plausivel que achei.
 * Aprendi bastante com esse exercício. Além de conhecer a biblioteca <string.h> soube mais funções da <stdlib.h>
 * Procurei manter o código o mais comentado possível, além de tentar manter o mais minimalista possível. Não poluindo o ambiente.
 * Usei variáveis em inglês para melhorar a interpretação de cada variável. Tenho sérios problema para atribuir nomes a variáveis. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define BOLD         "\x1B[1m"
#define RESET	     "\x1B[0m"
#define BLINK        "\x1B[5m"
#define BLUE         "\x1B[34m"








//Limpa buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as varáveis
	short unsigned int  day_int,month_int,year_int, daymonth_int, sum_daymonthyear,x,part_1_int,part_2_int,x_Resto;
	unsigned char op, day[3],month[3],year[4],sum_daymonthyear_char[4],part_1_char[3],part_2_char[3];
	bool lup;

	//Iniciando laço de repetição
	do{
		//Limpando o terminal
		system("clear");

		//Considerações iniciais
		printf("\n\n\t:::::Exercício 2.12:::::");

		//Obtendo dados
		printf("\n\n Preciso que você me diga em etapas o dia, mês e ano do seu aniversário.\n Assim vou conseguir lher avaliar melhor.");
		printf("\n Dia: ");
		scanf("%s", &day[0]);
		printf(" Mês: ");
		scanf("%s", &month[0]);
		printf(" Ano: ");
		scanf("%s", &year[0]);

		//Convertendo os dados obtidos por strings para números inteiros
		day_int = atoi(day);
		month_int = atoi(month);
		year_int = atoi(year);

		//Imprimindo o dia, mes e ano de nascimento do usuário, já convertido para números inteiros
		printf("\n Você nasceu em %02hd/%02hd/%04hd.", day_int,month_int,year_int);

		//Concatenando a variável day e month
		strncat(day,month,3);

		//Dia e Mês concatenado sendo convertido para int
		daymonth_int = atoi(day);

		// Calculando Dia e Mês concatenado com o ano
		sum_daymonthyear = daymonth_int + year_int;

		//Convertendo o Calculo do DiaMes + Ano para string
		sprintf(sum_daymonthyear_char, "%d", sum_daymonthyear);

		//Pegando a primeira metade do resultado da soma DiaMes + Ano e armazenando na parte 1
		memcpy(part_1_char, &sum_daymonthyear_char[0], 2);

		//Pegando a segunda metade do resultado da soma DiaMes + Ano e armazenando na parte 2
		memcpy(part_2_char, &sum_daymonthyear_char[2], 2);

		//Convertendo as metades obtidas do calculo DiaMes + Ano para inteiro
		part_1_int = atoi(part_1_char);
		part_2_int = atoi(part_2_char);

		//Somando as metades e armazenando o resultado na variável X e dividindo a mesma para obter o resto
		//Sendo o resto armazenado na variável x_Resto
		x = part_1_int + part_2_int;
		x_Resto = x % 5;

		//Condicional que irá imprimir  o perfil da pessoa, mediante ao resto alocado na variável x_
		switch(x_Resto){

			case 0:
				printf("\n Você é " BOLD BLINK BLUE "TÍMIDO!\n" RESET);
				break;
			case 1:
				printf("\n Você é " BOLD BLINK BLUE "SONHADOR!\n" RESET);
				break;
			case 2:
				printf("\n Você é " BOLD BLINK BLUE "PAQUERADOR!\n" RESET);
				break;
			case 3:
				printf("\n Você é " BOLD BLINK BLUE "ATRAENTE!\n" RESET);
				break;
			default:
				printf("\n Você é " BOLD BLINK BLUE "IRRESISTÍVEL!\n" RESET);
		}

		//Verificando se o usuário deseja continuar no programa
		printf("\n Deseja continuar [Y/n]? ");
		scanf(" %c", &op);

		//Avaliando o que o usuário escolheu
		if(tolower(op) == 'y') lup = true;
		else lup = false;

		//Limpando o buffer
		bufferClean();

	//Finalizando o laço de repetição
	}while(lup);

	//Limpando o terminal
	system("clear");

	//Considerações finais
	printf("\n\n\t:::::Encerrado:::::\n\n\n");

	//Finalizando o programa
	return 0;
}
