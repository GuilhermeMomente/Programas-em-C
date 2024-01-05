#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tabuada;
   
    printf("Digite um numero o qual a tabuada sera gerada:");
    scanf("%d", &tabuada);

    for(i = 0; i <= 10; i++){
        printf("%d * %d = %d", tabuada, i, tabuada * i);
        
    }
    return 0;
}