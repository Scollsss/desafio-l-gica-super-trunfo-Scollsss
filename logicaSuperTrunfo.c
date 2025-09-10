#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado[3], codigo[10], cidade[40];
    unsigned long int populacao;
    float area, densidade, pibpcapta, superpoder1;
    float pib;
    int pontosturisticos;

    // Variáveis da segunda carta
    char estado2[3], codigo2[10], cidade2[40];
    unsigned long int populacao2;
    float area2, densidade2, pibpcapta2, superpoder2;
    float pib2;
    int pontosturisticos2;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira carta: ");
    scanf("%2s", estado);

    printf("Digite o codigo da primeira carta: ");
    scanf("%9s", codigo);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %39[^\n]", cidade);

    printf("Digite a populacao da primeira carta: ");
    scanf("%lu", &populacao);

    printf("Digite a area da primeira carta (km): ");
    scanf("%f", &area);

    printf("Digite o PIB da primeira carta (em bilhoes): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosturisticos);

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    scanf("%2s", estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %39[^\n]", cidade2);

    printf("Digite a populacao da segunda carta: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da segunda carta (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosturisticos2);

    // ---- Cálculos ----
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    pibpcapta = (pib * 1000000000.0f) / populacao;   // PIB em reais
    pibpcapta2 = (pib2 * 1000000000.0f) / populacao2;

    superpoder1 = (float)populacao + area + pib + pontosturisticos + pibpcapta + (1.0f / densidade);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpcapta2 + (1.0f / densidade2);

    // ---- Exibição das cartas ----
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\nDensidade: %.2f hab/km\nPIB per Capita: %.2f reais\n",
           estado, codigo, cidade, populacao, area, pib, pontosturisticos, densidade, pibpcapta);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\nDensidade: %.2f hab/km\nPIB per Capita: %.2f reais\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2, densidade2, pibpcapta2);

    // ---- Comparação de Cartas ----
    printf("\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2); // menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpcapta > pibpcapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
