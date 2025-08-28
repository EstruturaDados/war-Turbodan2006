#include <stdio.h> //biblioteca padrão em C
#include <string.h> //biblioteca de manipulação de strings em C

typedef struct {
    char nome[30]; //Nome do jogador
    char corExercito[10]; //Cor do exército
    int numTropas; //Número de tropas
} Territorio; // Uma estrutura chamada Territorio(nome,cor e tropas)

int main() {
    
    Territorio war[5]; //Cria um vetor para cada jogador

    //Preenche dados de cada Território
    for(int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf(" %[^\n]", war[i].nome); //Lê o nome do jogador

        printf("Digite a cor do exército %d: ", i+1);
        scanf(" %[^\n]", war[i].corExercito);//Lê a cor do exército

        printf("Digite o número de tropas do exército %d: ", i+1);
        scanf("%d", &war[i].numTropas); //Lê o número de tropas
    }
    //Exibe os dados armazenados
    for(int i = 0; i < 5; i++) {
        printf("Nome da pessoa %d: %s\n", i+1, war[i].nome); //Exibe o nome do jogador
        printf("Cor do exército %d: %s\n", i+1, war[i].corExercito); //Exibe a cor do exército
        printf("Número de tropas do exército %d: %d\n\n", i+1, war[i].numTropas); //Exibe o número de tropas
    }

    return 0;
}
