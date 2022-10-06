#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    a = 10;
    b = 20;

    printf("\nO valor inicial de A é:%i", a);
    printf("\nO valor inicial de B é:%i", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nO valor trocado de A é:%i", a);
    printf("\nO valor trocado de B é:%i", b);
}