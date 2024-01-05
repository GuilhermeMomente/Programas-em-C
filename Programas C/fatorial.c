#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){
    int numero;
    printf("Digite um numero para calcular o fatorial:\n");
    scanf("%d", &numero);

    if(numero < 0){
        printf("O fatorial nao esta definido para numeros negativos!");
    }else{

        int resultado = fatorial(numero);
        printf("O fatorial de %d eh: %d", numero, resultado);
    }
    return 0;
}