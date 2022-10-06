#include <stdio.h>

int main(){

    int morangos, macas;
    float total, totalMorango, totalMaca;

    printf("Por favor, informe quantos quilos de morangos vai comprar: ");
    scanf("%d", &morangos);

    printf("Por favor, informe quantos quilos de macas vai comprar: ");
    scanf("%d", &macas);

    printf("\n------------------ Nota Fiscal -----------------------");

    if(morangos <= 5){
        totalMorango = morangos * 2.0;
        printf("\nQuantidade: %dkg     Preco/kg: R$ 2.00     Subtotal: %.2f\n", morangos, totalMorango);
    }else if(morangos > 5){
        totalMorango = morangos * 1.8;
        printf("\nQuantidade: %dkg     Preco/kg: R$ 1.80     Subtotal: %.2f\n", morangos, totalMorango);
    }else{
        printf("Valor invalido!");
    }

    if(macas <= 5){
        totalMaca = macas * 1.5;
        printf("Quantidade: %dkg     Preco/kg: R$ 1.50     Subtotal: %.2f\n", macas, totalMaca);
    }else if(macas > 5){
        totalMaca = macas * 1.1;
        printf("Quantidade: %dkg     Preco/kg: R$ 1.10     Subtotal: %.2f\n", macas, totalMaca);
    }else{
        printf("Valor invalido!");
    }

    total = totalMorango + totalMaca;

    if (morangos + macas >= 8 ||  total > 25){
        printf("Desconto de 10 porcento       ----->      Total:    %.2f", total * 0.9);
    }else{
        printf("Sem desconto                  ----->      Total:    %.2f", total);
    }

    return 0;
}