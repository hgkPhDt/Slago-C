/* Exercício 1.3 - Slago-C */
//Header Standart input output (entrada e saída).
#include <stdio.h>
//Definindo uma CONSTANTE (nunca muda).
#define MEDIA 7.00

int main(){
    //Declarando as variáveis.
    float nota1, nota2, nota3;
    
    //Solicitando os dados
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    //Operação da média.
    nota3 = (nota1 + nota2) / 2;
    
    //Imprime na tela a média do aluno.
    printf("Sua media é: %.1f\n", nota3);
    
    //Condicional para informar se o aluno passou ou não.
    if(nota3 >= MEDIA){
        printf("Voce passou!\n ~Ebaa!\n");
    }else{
        printf("Voce reprovou!\n ~A persistencia e a chave para o sucesso!\n");
    }
}