#include <stdio.h>

int delta (float a, float b, float c){
    float resultado;
    resultado=b*b-4*a*c;
    return resultado;
}

int main (){

    float a,b,c,resultado;

    printf ("\n Digite o valor de A\n");
    scanf ("%f", &a);
    printf ("\n Digite o valor de B \n");
    scanf ("%f",&b);
    printf ("\n Digite o valor de C \n");
    scanf ("%f", &c);

    resultado=delta(a,b,c);

    printf("resultado=%.2f\n",resultado);

    return 0;
}
