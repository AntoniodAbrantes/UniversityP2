#include <stdio.h>
#include <stdlib.h>


int main(){
  float x, y;
  float soma;
  float multi;
  float sub;
  float divi;
  
  printf("Digite o valor de X: ", x);
  scanf("%f", &x);
  
  printf("Digite o valor de Y: ", y);
  scanf("%f",&y);
  
  soma = x+y;
  multi = x*y;
  sub = x-y;
  divi = x/y;
  
  printf("A soma dos valores é %.2f \n", soma);
  printf("A multiplicação é %.2f \n", multi);
  printf("A subtração é %.2f \n", sub);
  printf("E a divisão é %.2f \n", divi);
  
    

    return 0;
}
