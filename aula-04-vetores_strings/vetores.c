#include <stdio.h>

int main(){
    float notas[2] = {10,8};
    /*
    vetores --> nome_variavel[] ou nome_variavel[3] ou 
    nome_variavel[3] = {0, 1, 2} ou nome_variavel[5] = {0, 1, 2}//+ 0, 0}
    */
    for(int i = 0; i < 2; i++){
        printf("%f\n", notas[i]);

    }

    notas[0] = 10;
    notas[1] = 8;


    //Calcular a media das duas notas
    printf("A media das duas notas e: %.2f", (notas[0] + notas[1])/ 2);




    return 0;
}