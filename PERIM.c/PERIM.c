/* PERIM.C - informa o perímetro de uma circunferência */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> //toupper(convert)
#define PI 3.1415

int main() {
    
    float raio;
    char convert;
    bool op;
    
    do{ 
        system("clear");
        
        printf(" Qual a medida do raio? ");
        scanf("%f", &raio);
        
        float perim;
        
        /* calcula o seu perímetro */
        perim = 2*PI*raio;
        
        printf(" O perímetro é %f \n", perim);
        
        
        printf(" Digite [E] para sair.\n Digite [C] para continuar.\n >> ");
        scanf(" %c", &convert);
        
        if(toupper(convert) == 'C'){
            op = true;
        }else{
            op = false;
        }
        
    }while(op);
    
}