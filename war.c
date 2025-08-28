#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char corExercito[10];
    int numTropas;
} Territorio;

int main() {
    
    Territorio war[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf(" %[^\n]", war[i].nome); 

        printf("Digite a cor do exército %d: ", i+1);
        scanf(" %[^\n]", war[i].corExercito);

        printf("Digite o número de tropas do exército %d: ", i+1);
        scanf("%d", &war[i].numTropas);
    }
    
    return 0;
}
