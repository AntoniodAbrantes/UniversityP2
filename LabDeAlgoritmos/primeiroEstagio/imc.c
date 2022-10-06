#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, imc;

    printf("Qual o seu peso atual?");
    scanf("%f", &peso);

    printf("Qual a sua altura atual?");
    scanf("%f", &peso);

    imc = peso/(altura*altura);

    if(imc < 18.5){

        printf("Abaixo do peso");

    }else if(imc >= 18.5 && imc < 25){

        printf("Peso normal");

    }else if(imc >= 25 && imc < 30){

        printf("Acima do peso");

    }else{

        printf("Obeso");

    }
}