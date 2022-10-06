#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char texto [] = "Linguagem|C";
    for(i = 0; i < strlen(texto); i++){
        printf("caracter %d: %c\n", i, texto[i]); 
    }
    return 0;  
}