#include <stdio.h>

int main(void){
    double x = 0, y = 0, resultado = 0;
    int op;
    do{
        printf("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO");
        scanf("%i", &op);
        printf("Digite o primeiro numero:\n");
        scanf("%f", &x);
        printf("Digite o segundo numero:\n");
        scanf("%f", &y);
        switch(op){
            case 1:
            resultado = x+y;
            break;
            case 2:
            resultado = x-y;
            break;
            case 3:
            resultado = x*y;
            break;
            case 4:
            resultado = x/y;
            default:
            printf("Digite uma opcao valida\n");

        }
        printf("\n\t O resultado e: %.2f", resultado);
        printf("\n Digite 1 para continuar");
        scanf("%i", &op);
    }while(op==1);
    
}