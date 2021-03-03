/* Exercício 1.3 - Slago-C - Calculando a média de um aluno e verificando se o mesmo passou ou não.*/

#include <stdio.h>
#include <stdlib.h> //system("clear");
#include <ctype.h> //toupper();
#include <stdbool.h>
#define MEDIA 7.00

void limpabuffer() {
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){
    //Declarando as variáveis.
    float nota1, nota2, nota3;
    unsigned char op;
    bool lup;
    
    do{

        //Limpando o terminal
        system("clear");

        //Texto informativo
        printf("\n\t:::::Calculando a média de notas:::::\n");
          printf("\t:::::::::::::Exercicio 1.3:::::::::::\n\n");


        //Obtenção de dados
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);
        
        //Operação/Calculo das notas e convertendo em uma média
        nota3 = (nota1 + nota2) / 2;
        
        //Imprime na tela a média do aluno.
        printf("Sua media é: %.1f\n", nota3);
        
        //Condicional para informar se o aluno passou ou não.
        if(nota3 >= MEDIA){
            printf("Voce passou!\n ~Ebaa!\n");
        }else{
            printf("Voce reprovou!\n ~A persistencia e a chave para o sucesso!\n");
        }

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

    //Limpa o terminal e encerra o programa.
    system("clear");

    printf("\t::::::Exercicio 1.3::::::\n");
    printf("\t::::::::Encerrado::::::::\n\n");

    return 0;
}
