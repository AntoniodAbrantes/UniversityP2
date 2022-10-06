#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano, idade, nascimento;

    printf("Digite o ano do seu nascimento: ");
    scanf("%i", &nascimento);

    printf("Digite o ano atual: ");
    scanf("%i", &ano);

    idade  = ano - nascimento;

    if(idade >=18){
        printf("Maior de idade, ");
    }
    else{
        printf("Você é de menor, ");
    }

    printf("Sua idade é: %i", idade);

    return 0;
}