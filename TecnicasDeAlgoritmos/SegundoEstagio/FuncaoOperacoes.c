#include <stdio.h>


int multiplicar(int n1, int n2){
    int resultado = n1 * n2;
    return printf("Multiplicação: %d * %d = %d", n1, n2, resultado);
};
int somar(int n1, int n2){
    int resultado = n1+n2;
    return printf("Soma: %d + %d = %d", n1, n2, resultado);
};
int subtrair(int n1, int n2){
    int resultado = n1-n2;
    return printf("Subtração: %d - %d = %d", n1, n2, resultado);
};
float dividir(int n1, int n2){
    float resultado = (float)n1/(float)n2;
    return printf("Divisão: %d / %d = %f", n1, n2, resultado);

};

int main()
{
    int n1, n2, operacao;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um número: ");
    scanf("%d", &n2);
    printf("Escolha a operação para os números(1 para multiplicação, 2 para soma, 3 para subtrair e 4 para dividir): ");
    scanf("%d", &operacao);
    
    switch (operacao)
    {
    case 1:
        multiplicar(n1,n2);
        break;
    case 2:
        somar(n1,n2);
        break;
    case 3:
        subtrair(n1,n2);
        break;
    case 4:
        dividir(n1,n2);
        break;
    
    default:
        break;
    }

    return 0;
}
