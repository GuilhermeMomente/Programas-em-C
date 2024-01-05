#include <stdio.h>
#include <stdlib.h>

void imprimeSoma(int a, int b){
    printf("\nSoma: %d", a + b);
}
int retornaSoma(int a, int b){
    int soma = a + b;
    return soma;
}
float retornaComMais10(float a){
    return a + 10.0;
}

int main(){
    //Enviando so para imprimir
    int valor1, valor2;
    printf("Insira dois valores inteiros:");
    scanf("%d %d", &valor1, &valor2);
    imprimeSoma(valor1, valor2);

    printf("\n\nResultado Soma 20 + 30: %d", retornaSoma(20,30));

    //Recebendo valor de uma funcao para uma variavel
    float valorfinal = retornaComMais10(15.5);
    printf("\nValor com mais 10: %f\n", valorfinal);

    return 0;
}