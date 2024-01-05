#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, inicial, final,somai;
    
    printf("Escreva um valor inicial:\n");
    scanf("%d", &inicial);
    
    printf("Escreva um valor final:\n");
    scanf("%d", &final);

    printf("Escreva um valor de soma ou subtracao para i(Exemplo -5 ou +5)");
    scanf("%d", &somai);

    printf("Estes valores irao indicar o intervalo intervalo de i:");

    for(i = inicial; i <= final; i = i + somai){
        printf("%d\n", i);
    }
    return 0;
}
