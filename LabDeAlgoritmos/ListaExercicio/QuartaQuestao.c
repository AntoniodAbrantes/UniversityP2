#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char timea, timeb;
    int golsA, golsB;

    printf("Qual o time da casa digite as duas primeiras letras: ");
    scanf("%c", &timea);
    getchar();

    printf("Quantos gols marcados? ");
    scanf("%i", &golsA);

    printf("Qual o time visitante digite as duas primeiras letras: ");
    getchar();
    scanf("%c", &timeb);

    printf("Quantos gols marcados? ");
    scanf("%i", &golsB);
   

    if(golsA > golsB){
        printf("O time %c é o vencedor", timea);
    }
    else if(golsB > golsA){
        printf("O time %c é o vencedor", timeb);
    }
    else if(golsA==golsB){
        printf("EMPATE!");
    }

    return 0;
}