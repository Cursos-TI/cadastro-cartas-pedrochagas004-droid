#include <stdio.h>

int main() {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("--- CADASTRO DE CARTAS: SUPER TRUNFO ---\n\n");

    // Lendo o Estado (Apenas uma letra)
    printf("Digite a letra do Estado (A-H):\n");
    scanf(" %c", &estado);

    // Lendo o Codigo
    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo);

    // Lendo o Nome da Cidade (Pode conter espaços agora!)
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", nomeCidade); 

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area (km2):\n");
    scanf("%f", &area);

    printf("Digite o PIB (bilhoes):\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);

    // EXIBICAO DOS DADOS (Um por linha, bem organizado)
    printf("\n===============================\n");
    printf("ESTADO: %c\n", estado);
    printf("CODIGO: %s\n", codigo);
    printf("NOME DA CIDADE: %s\n", nomeCidade);
    printf("POPULACAO: %d\n", populacao);
    printf("AREA: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("PONTOS TURISTICOS: %d\n", pontosTuristicos);
    printf("===============================\n");

    return 0;
}

