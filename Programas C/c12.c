#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a = 0;
    int b = 0;
    //Le o limite superior
    while (!(a > 5 && a < 10) || !(b > 5 && b < 10)){
    printf("Escreva valores entre 5 e 10:\n");

    printf("Escreva um numero entre 5 e 10:\n");
    scanf("%d", &a);

    printf("Escreva o outro numero entre 5 e 10:\n");
    scanf("%d", &b);
    }
    
    printf("Soma: %d", a + b);
    
    return 0;
}