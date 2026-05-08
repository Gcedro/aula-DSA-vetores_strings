#include <stdio.h>
#include <string.h>

int main(){

    /*char valor = 'c';
    char palavra[5] = {'c', 'a', 's', 'a'};
    printf("%c", valor);
    printf("%s", palavra);
    */

    char nome[20] = "Guilherme"; // {'g', 'u', 'i', 'l', 'h', 'e', 'r', 'm', 'e'};
    
    printf("Digite seu nome: ");
    
    //scanf("%s", nome); //Nao aceita espaço, considera espaço como finalização
    
    fgets(nome, 20, stdin); 
    
    nome[strcspn(nome, "\n")] = '\0'; 
    
    printf("O seu nome e: %s", nome);

    return 0;
}