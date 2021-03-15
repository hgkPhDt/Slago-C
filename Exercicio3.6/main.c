#include <stdio.h>
#include <stdlib.h>

//Limpa buffer do Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(void){
	//Declarando variáveis
	int n,i,j;

	//Obtendo dados
	printf("\n Digite o número fatorial: ");
	scanf("%d", &n);

	//Imprimindo o fatorial
	printf("\n %d! = ", n);

	//Faz a decomposição do número em decrescente
	for(i = n; i > 0; i--){
		printf("%d.", i);
	}

	//Define j como 1
	j = 1;
	while(n > 0){
		j *= n;
		n--;
	}
	//No primeiro loop, j = 01 * 4
	//No segundo  loop, j = 04 * 3
	//No terceiro loop, j = 12 * 2
	//No quarto   loop, j = 24 * 1

	printf("= %d\n\n", j);
	return 0;
}
