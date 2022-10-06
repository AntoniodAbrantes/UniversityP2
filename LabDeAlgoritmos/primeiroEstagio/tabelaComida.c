#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo, qtdePedido, qtde[6] = {0,0,0,0,0,0}, i;
    float valorItem = 0, valorTotal = 0, valorPorItem[6] = {0,0,0,0,0,0};
    
    while (1){
        printf("Digite o código do produto (Caso queira encerrar o pedido, digite 0):\n");
        scanf("%i", &codigo);
        
        if (codigo == 0){
            break;
        }
        
        printf("Digite a quantidade de produtos:\n");
        scanf("%i", &qtdePedido);
        
        switch(codigo){
            case 100:
                valorItem = 1.20 * qtdePedido;
                valorTotal += valorItem;
                qtde[0] += qtdePedido;
                valorPorItem[0] += valorItem;
                break;
            case 101:
                valorItem = 1.30 * qtdePedido;
                valorTotal += valorItem;
                qtde[1] += qtdePedido;
                valorPorItem[1] += valorItem;
                break;
            case 102:
                valorItem = 1.50 * qtdePedido;
                valorTotal += valorItem;
                qtde[2] += qtdePedido;
                valorPorItem[2] += valorItem;
                break;
            case 103:
                valorItem = 1.20 * qtdePedido;
                valorTotal += valorItem;
                qtde[3] += qtdePedido;
                valorPorItem[3] += valorItem;
                break;
            case 104:
                valorItem = 1.30 * qtdePedido;
                valorTotal += valorItem;
                qtde[4] += qtdePedido;
                valorPorItem[4] += valorItem;
                break;
            case 105:
                valorItem = 1.00 * qtdePedido;
                valorTotal += valorItem;
                qtde[5] += qtdePedido;
                valorPorItem[5] += valorItem;
                break;
            default:
                printf("Código inválido!");
        }
        
    }
    
    printf("\n---------------------------------------------");
    printf("\n------------Nota Fiscal Pessoense------------");
    printf("\n---------------------------------------------");
    
    for (i = 0; i < 6; i++){
        
        if (qtde[i] != 0){
            switch(i){
                case 0:
                    printf("\n%i - Cachorro Quente - R$ %.2f", qtde[i], valorPorItem[i]);
                    break;
                case 1:
                    printf("\n%i - Bauru Simples - R$ %.2f", qtde[i], valorPorItem[i]);
                    break;
               case 2:
                    printf("\n%i - Bauru com Ovo - R$ %.2f", qtde[i], valorPorItem[i]);
                    break;
               case 3:
                    printf("\n%i - Hamburguer - R$ %.2f", qtde[i], valorPorItem[i]);
                    break;
               case 4:
                    printf("\n%i - X-Burguer - R$ %.2f", qtde[i], valorPorItem[i]);
                    break;
               case 5:
                    printf("\n%i - Refrigerante - R$ %.2f", qtde[i], valorPorItem[i]);
                    break;
            }
        }
        
    }
    printf("\n---------------------------------------------");
    printf("\nO valor total da sua conta é igual à: %.2f", valorTotal);
    printf("\n---------------------------------------------");

    
    return 0;
}