#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50], c_carta1[50], n_cidade1[50];
    int populacao1, n_pontos1;
    float area1, pib1;
    float densidade1;
    float pibpercapita1;

    // Carta 2
    char estado2[50], c_carta2[50], n_cidade2[50];
    int populacao2, n_pontos2;
    float area2, pib2;
    float densidade2;
    float pibpercapita2;

    // ----- Entrada da Carta 1 -----
    printf("Digite os dados da Carta 1:\n");

    printf("UF do estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", c_carta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", n_cidade1);  // Lê string com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pontos1);

    printf("Área da cidade: ");
    scanf("%f", &area1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // ----- Entrada da Carta 2 -----
    printf("\nDigite os dados da Carta 2:\n");

    printf("UF do estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", c_carta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", n_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pontos2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // ----- Saída -----
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", c_carta1);
    printf("Nome da Cidade: %s\n", n_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", n_pontos1);
    printf("Densidade Populacional: %.3f\n", densidade1);
    printf("PIB per Capita:: %f\n", pibpercapita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", c_carta2);
    printf("Nome da Cidade: %s\n", n_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_pontos2);
    printf("Densidade Populacional: %.3f\n", densidade2);
    printf("PIB per Capita:: %f\n", pibpercapita2);

    return 0;
}
