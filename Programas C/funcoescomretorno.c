#include <stdio.h>
#include <stdlib.h>

int retorna10(){
    int a = 10;
    return a;
}
float retornaQuebrado()[
    int a = 5.5;
    return a;
]
char retornaLetra(){
    return 'a';
}

int main(){
    //Funcao direto no printf
    printf("Retorna 10 da funcao: %d \n", retorna 10);

    //Funcao retornando valor para uma variavel
    float numeroQuebrado = retornaQuebrado();
    printf("Numero quebrado: %f\n", numeroQuebrado);

    //Retornando direto no printf
    printf("Retorna Letra: %c\n", retornaLetra());
    return 0;
}