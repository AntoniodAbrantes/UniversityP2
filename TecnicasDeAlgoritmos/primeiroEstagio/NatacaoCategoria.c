#include <stdlib.h>
#include <stdio.h>

int main(){

    int nascimento, idade;
    printf("Qual o seu ano de nascimento?");
    scanf("%i", &nascimento);

    idade = 2022 - nascimento;

    if (idade < 5){

     printf("Criança fdp!");   

    }else if(idade >= 8 && idade < 11){

        printf("Você faz parte da categoria INFATIL B");

    }else if(idade >= 11 && idade < 14){

        printf("Você faz parte da categoria JUVENIL A");

    }else if(idade >= 14 && idade < 17){

        printf("Você faz parte da categoria JUVENIL B");

    }else{
        printf("Sênior");
    }
    
    return 0;

}