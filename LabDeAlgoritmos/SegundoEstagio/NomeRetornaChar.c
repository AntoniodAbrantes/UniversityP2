#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[30];
    int i = 0, cont = 0;
    
    printf("Digite o nome: ");
    gets(nome);
    
    while(nome[i] != '\0') {
        if(nome[i] != ' ') {
            cont++;
        }
        i++;
    }
    
    printf("Foram digitados %d caracteres.", cont);
    
    return 0;
}