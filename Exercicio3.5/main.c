#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Limpa Buffer Manjor Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Função primária
int main(){
	//Declarando as varáveis
	unsigned int x,n, y;

	printf("\n Digite o numero de x: ");
	scanf("%d", &x);
	printf(" Agora digite o numero da potência de x: ");
	scanf("%d", &n);

	y = pow(x,n);

	printf("\n O valor de %d elevado a %d é: %d\n", x, n, y);

	bufferClean();
	return 0;
}
