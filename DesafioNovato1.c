#include <stdio.h>
#include <string.h>

// Definição da struct que representa um território
struct Territorio {
    char nome[30];    // Nome do território
    char cor[10];     // Cor do exército
    int tropas;       // Quantidade de tropas
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n");

    // Cadastro dos territórios
    for (i = 0; i < 5; i++) {
        printf("\nCadastro do território %d:\n", i + 1);

        // Leitura do nome
        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome); // Lê até 29 caracteres ou até encontrar ENTER

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %9[^\n]", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos territórios cadastrados
    printf("\n=== Territórios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}

