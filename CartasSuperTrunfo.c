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

    // --- VARIÁVEIS CARTA 3 ---
    char estado3;
    char codigo3[5];
    char nomeCidade3[50];
    int populacao3;
    float area3, pib3;
    int pontosTuristicos3;

     // --- VARIÁVEIS CARTA 4 ---
    char estado4;
    char codigo4[5];
    char nomeCidade4[50];
    int populacao4;
    float area4, pib4;
    int pontosTuristicos4;

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

        // --- CADASTRO DA CARTA 3 ---
    printf("\n--- CADASTRO DA CARTA 3 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado3);
    printf("Codigo: ");
    scanf("%s", codigo3);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade3);
    printf("Populacao: ");
    scanf("%d", &populacao3);
    printf("Area: ");
    scanf("%f", &area3);
    printf("PIB: ");
    scanf("%f", &pib3);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos3);

        // --- CADASTRO DA CARTA 4 ---
    printf("\n--- CADASTRO DA CARTA 4 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado4);
    printf("Codigo: ");
    scanf("%s", codigo4);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade4);
    printf("Populacao: ");
    scanf("%d", &populacao4);
    printf("Area: ");
    scanf("%f", &area4);
    printf("PIB: ");
    scanf("%f", &pib4);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos4);

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

    printf("\n===============================\n");
    printf("CARTA 3: %s\n", nomeCidade3);
    printf("Estado: %c - Codigo: %s\n", estado3, codigo3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km2 - PIB: %.2f bilhoes\n", area3, pib3);
    printf("Pontos Turisticos: %d\n", pontosTuristicos3);

    printf("\n===============================\n");
    printf("CARTA 4: %s\n", nomeCidade4);
    printf("Estado: %c - Codigo: %s\n", estado4, codigo4);
    printf("Populacao: %d\n", populacao4);
    printf("Area: %.2f km2 - PIB: %.2f bilhoes\n", area4, pib4);
    printf("Pontos Turisticos: %d\n", pontosTuristicos4);

    return 0;
}

