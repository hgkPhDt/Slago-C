/* OBESO.C – informa se uma pessoa está ou não obesa */  
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //~toupper(convert)
#include <math.h>
#include <stdbool.h>
#define LIMITE 30

int main() {

    float peso, altura, imc;
	char convert;
	bool op;

	do{
		system("clear");
	
		printf(" Ex: Peso = 70.5 e Altura = 1.75. \n");
    	printf(" Qual o seu peso? ");
    	scanf("%f", &peso);
    	printf(" Qual a sua altura? ");
	    scanf("%f", &altura);
	    
	    imc = peso/pow(altura,2);
	    
	    printf("\n >> Seu i.m.c. e: {%.1f} <<\n\n", imc);
	    
	    if(imc <= LIMITE){
	    	printf(" Voce nao esta obeso!\n\n");
	    }else{
	    	printf(" Voce esta obeso!\n\n");
		}
    	
    	printf(" Digite [E] para sair.\n Se desejar continuar, digite [C].\n >> ");
    	scanf(" %c", &convert);
    
    	if(toupper(convert) == 'C'){
    		op = true;
    	}else{
    		op = false;
    		printf("Isso e um adeus?\n");
    	}

    }while(op);

    return 0;
}