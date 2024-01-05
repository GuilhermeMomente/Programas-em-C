#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i = 0;

    while(i <= 10){
        //Imprime i e pula uma linha
        printf("%d \n", i);
        //Aumenta em 1 o valor do i atual
        i = i + 1;

        //Quando chega aqui, o codigo volta para a linha 8 e verifica
        //se a condicao i <= 10 continua verdadeira, para executar
        //o laco novamente ou sair
    } 
    return 0;
}
