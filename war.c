#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define DADOS_REGIAO 5

struct territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

typedef struct territorio territorio;

int main() {
    setlocale(LC_ALL, "Portuguese");

    territorio lista[DADOS_REGIAO];
    int i;
//laço de 5 repetições definido no escopo global

    // inserção dos dados fazendo chamada a uma lista de 3 dados
    for (i = 0; i < DADOS_REGIAO; i++) { 
        printf("Escolha uma região: \n");
        scanf(" %29[^\n]", lista[i].nome); 
        printf("Escolha uma cor: \n");
        scanf(" %9[^\n]", lista[i].cor);

        printf("Digite a quantidade de tropas: \n");
        scanf("%d", &lista[i].tropas);
    }

    printf("\n=== Estado do Mapa ===\n"); //formatação para o usuário
    for (i = 0; i < DADOS_REGIAO; i++) {
        printf("Região: %s | Cor: %s | Tropas: %d\n",
               lista[i].nome, lista[i].cor, lista[i].tropas);
    }

    return 0;
}

