#include <stdio.h>


int MenorNumero(int n1, int n2){
    if(n1 < n2){
        return printf("O menor número digitado foi: %d", n1);
    }
    else if(n2 < n1){
        return printf("O menor número digitado foi: %d", n2);
    }
    else{
        return printf("OS NUMEROS SAO IGUAIS");
    }
}

int main(){
    
    int n1, n2;

    
    printf("----DIGITE DOIS NUMEROS PARA RETORNAR O MENOR DELES----\n");
    
    printf("\nDigite um número:");
    scanf("%i", &n1);
    printf("\nDigite o segundo número:");
    scanf("%i", &n2);
    

    MenorNumero(n1,n2);

    return 0;
}