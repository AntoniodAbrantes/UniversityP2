#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, num3;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite um número: ");
    scanf("%f", &num2);

    printf("Digite um número: ");
    scanf("%f", &num3);

    if(num1>num2 && num1>num3){ //1 é maior
        printf("O maior número é o: %2.f", num1);
    }
    else if(num2>num1 && num2 > num3){ //2 é maior
        printf("O maior número é o: %2.f", num2);
    }
    else if(num3 > num1 && num3 > num2){ //3 é o maior
        printf("O maior número é o: %2.f", num3);
    }
    else{
        printf("São iguais");
    }


    return 0;

}

//////////// OUTRA FORMA /////////////////

// #include <stdio.h>
//#include <stdlib.h>

//int main() {
    //float valores[3], valor_maior = 0;

    //for (int i = 0; i < 3; i++) {
        //printf("Digite um valor: ");
        //scanf("%f", &valores[i]);

        //if (valores[i] > valor_maior) {
            //valor_maior = valores[i];
        //}
    //}            
    //printf("O maior valor é: %.2f\n", valor_maior);

    //return 0;
//}