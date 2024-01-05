#include <stdio.h>
#include <string.h>

int main(){
    char nomes[10][50];
    for(int i = 0; i < 10; i++){
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(strcmp(nomes[i], nomes[j] > 0)){
                char temp[50];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }

    }
    printf("\nNomes em ordem Alfabetica:\n");
    for(int i = 0; i < 10; i++){
        printf("%s\n", nomes[i]);
    }
}
