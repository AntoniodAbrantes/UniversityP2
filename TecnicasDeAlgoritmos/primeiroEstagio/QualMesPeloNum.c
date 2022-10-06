#include <stdlib.h>
#include <stdio.h>

int main(){

    int mes;

    printf("Digite um numero de 1-12 para descobrir o mês:");
    scanf("%i", &mes);

    switch(mes){
        case 1:
        printf("Janeiro e ele tem 31 dias"); break;
        case 2:
        printf("Fevereiro e ele tem 28 dias"); break;
        case 3:
        printf("Março e ele tem 30 dias"); break;
        case 4:
        printf("Abril e ele tem 31 dias"); break;
        case 5:
        printf("Maio e ele tem 30 dias"); break;
        case 6:
        printf("Junho e ele tem 31 dias"); break;
        case 7:
        printf("Julho e ele tem 30 dias"); break;
        case 8:
        printf("Agosto e ele tem 31 dias"); break;
        case 9:
        printf("Setembro e ele tem 30 dias"); break;
        case 10:
        printf("Outubro e ele tem 31 dias"); break;
        case 11:
        printf("Novembro e ele tem 30 dias"); break;
        case 12:
        printf("Dezembro e ele tem 31 dias"); break;
        default: 
        printf("Não faz parte do ano, tente novamente");

    }
    return 0;
}