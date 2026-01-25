#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 #include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado;              // Ex: 'A'
    char codigo[4];           // Ex: "A01"
    char nomeCidade[50];      // Ex: "Rio de Janeiro"
    int populacao;            // Números inteiros
    float area;               // Números com vírgula (km²)
    float pib;                // Números com vírgula (Dinheiro)
    int pontosTuristicos;     // Números inteiros]

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade); // Esse comando estranho lê nomes com espaços!

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km2): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
}


  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
