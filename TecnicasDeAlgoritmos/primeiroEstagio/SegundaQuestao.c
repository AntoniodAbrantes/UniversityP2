#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    int maior = 0;
 
    for(i = 0; i < 5; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
 
    printf("\nO maior numero digitado foi: %d", maior);
 
   return 0;
}