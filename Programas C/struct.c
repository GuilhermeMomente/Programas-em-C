#include <stdio.h>
#include <stdlib.h>

struct Pessoa{          //Definicao do "molde" para Pessoas 
    int idade;          //Atributo de idade
    float salario;      //Atributo de salario
    char nome[255];     //Atributo de
};

int main(){
    Pessoa pessoa1;         //Cria um struct do tipo pessoa
    pessoa.idade = 25;      //Muda a idade da pessoa
    pessoa.salario = 500.0; //Muda o salario da pessoa
    printf("%d anos, salario RS%.2f", pessoa.idade, pessoa.salario);

    return 0;
}
