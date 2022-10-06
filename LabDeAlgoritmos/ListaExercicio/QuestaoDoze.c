#include <stdio.h>
#include <stdlib.h>

int main(){
    int numFilhos = 0, somaFilhos = 0, countPessoas = 0, countSalarioAte100 = 0;
    float salario, somaSalarios = 0.0, mediaSalarios, mediaFilhos, maiorSalario = 0.0, percentualSalarioMenorQue100;

    while(1){
        printf("Qual o seu salario?");
        scanf("%f", &salario);
        if (salario < 0){
             break;
        }
        printf("Quantos filhos você tem?");
        scanf("%i", &numFilhos);
        somaSalarios += salario;
        somaFilhos += numFilhos;
        countPessoas++;

        if(salario <= 100){ 
        countSalarioAte100++;
        }
        if (salario > maiorSalario){
            maiorSalario = salario;
        }

    }
    mediaSalarios = somaSalarios/countPessoas;
    mediaFilhos = somaFilhos/countPessoas;
    percentualSalarioMenorQue100 = (countSalarioAte100/(float)countPessoas) * 100;

    printf("A média salarial é de: R$%.2f", mediaSalarios);
    printf("A média de filhos é de: R$%.2f", mediaFilhos);
    printf("O maior salario é igual a: R$%.2f", maiorSalario);
    printf("O percentual de salarios abaixo de R$100 é de %.2f por cento (%i pessoas de %i).", percentualSalarioMenorQue100, countSalarioAte100, countPessoas);

    return 0;
}