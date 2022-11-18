#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, char op) {
    if (op == 'A') {
        return (n1 + n2 + n3) / 3;
    } else if (op == 'P') {
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}

int main()
{
    float nota1, nota2, nota3, calc;
    char op;

    printf("Digite a opção [A ou P]: ");
    scanf("%c", &op);
    printf("Digite as notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calc = media(nota1, nota2, nota3, op);

    printf("Média = %f", calc);

    return 0;
}