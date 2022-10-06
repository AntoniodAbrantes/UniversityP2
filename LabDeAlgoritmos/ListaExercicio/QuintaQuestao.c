#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;
    float litros_vendidos_1, litros_vendidos_2, valor, total;
    

    printf("Alcool ou gasolina, digite 1 para gasolina e 2 para alcool: ");
    scanf("%i", &codigo);

    if(codigo == 1){
        printf("Quantos litros de gasolina você deseja colocar: ");
        scanf("%f", &litros_vendidos_1);
        if(litros_vendidos_1 <= 20.0){
            valor = 1.20 - (1.20 * 0.04);
            total = litros_vendidos_1 * valor;
            printf("O valor total ficou: %f", total);
        }
        else if(litros_vendidos_1 >= 20.0){
            valor = 1.20 - (1.20 * 0.06);
            total = litros_vendidos_1 * valor;
            printf("O valor total ficou: %f", total);
        }
    }    
    else if(codigo == 2){
        printf("Quantos litros de gasolina você deseja colocar: ");
        scanf("%f", &litros_vendidos_2);
        if(litros_vendidos_2 <= 20.0){
            valor = 0.90 - (0.90 * 0.03);
            total = litros_vendidos_2 * valor;
            printf("o valor total ficou: %f", total);
        }
        else if(litros_vendidos_2 >= 20.0){
            valor = 0.90 - (0.90 * 0.05);
            total = litros_vendidos_2* valor;
            printf("O valor total ficou: %f", total);
        }
    }
        return 0;

}