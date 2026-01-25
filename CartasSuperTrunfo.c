#include <stdio.h>

int main() {
    // --- VARIÁVEIS CARTA 1 ---
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // --- VARIÁVEIS CARTA 2 ---
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // (Você pode criar as variáveis para a 3 e 4 aqui embaixo seguindo o mesmo padrão)

    // --- CADASTRO DA CARTA 1 ---
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n===============================\n");
    printf("CARTA 1: %s\n", nomeCidade1);
    printf("Estado: %c - Codigo: %s\n", estado1, codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2 - PIB: %.2f bilhoes\n", area1, pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===============================\n");
    printf("CARTA 2: %s\n", nomeCidade2);
    printf("Estado: %c - Codigo: %s\n", estado2, codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2 - PIB: %.2f bilhoes\n", area2, pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

