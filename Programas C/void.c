#include <stdio.h>
#include <stdlib.h>

//Funcao void(Nao retorna nada no fim)
void desenhaSeparador(){
    printf("\n------------\n");
}

int main(){
    //Chama a funcao e executa o que estiver dentro dela
    desenhaSeparador();
    printf("Oi");
    desenhaSeparador();
    printf("Fim");
    desenhaSeparador();

    return 0;
}