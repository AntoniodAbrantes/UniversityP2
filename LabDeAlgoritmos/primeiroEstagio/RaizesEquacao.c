#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float coeficienteA, coeficienteB, coeficienteC, delta, raiz1, raiz2, raiz_unica;

    printf("Digite os coeficiente A: ");
    scanf("%f", &coeficienteA);

    printf("Digite os coeficiente B: ");
    scanf("%f", &coeficienteB);

    printf("Digite os coeficiente C: ");
    scanf("%f", &coeficienteC);

    delta = (coeficienteB*coeficienteB) - (coeficienteA*4*coeficienteC);

    if(delta < 0)
    {
        printf("Não existe raizes!");

    }else if (delta == 0)
    {
        raiz_unica = ((-1*coeficienteB) + sqrt(delta))/2;
        printf("Raízes identicas %f", raiz_unica);

    }else
    {
        raiz1 = ((-1*coeficienteB) + sqrt(delta))/(2*coeficienteA);
        raiz2 = ((-1*coeficienteB) - sqrt(delta))/(2*coeficienteA);
        printf("Raizes reais distintas: X' e X'' %f e %f", raiz1, raiz2);

    }
}