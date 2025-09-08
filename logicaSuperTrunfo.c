#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    char estado[3], estado2[3];
    char codigo[10], codigo2[10];
    char cidade[40], cidade2[40];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosturisticos, pontosturisticos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Digite o estado da primeira carta: ");
    scanf("%2s", estado);

    printf("Digite o codigo da primeira carta: ");
    scanf("%9s", codigo);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", cidade);  // permite espacos

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao);

    printf("Digite a area da primeira carta: ");
    scanf("%f", &area);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosturisticos);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
