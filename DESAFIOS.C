#include <stdio.h>

int main() {

    // CARTA 1

    char estado1;
    char codigo1[12];
    char nomeCidade1[66];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // CARTA 2

    char estado2;
    char codigo2[12];
    char nomeCidade2[66];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    ///////////////////////////////

    // DADOS DA CARTA 1

    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade (sem espaco): ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //////////////////////////////////////////

    // DADOS DA CARTA 2

    printf("\n=== CADASTRO CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade (sem espaco): ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //////////////////////////////////////////////////

    // CALCULOS

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = populacao1 + area1 + (pib1 * 1000000000.0) +
                  pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    superPoder2 = populacao2 + area2 + (pib2 * 1000000000.0) +
                  pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    /////////////////////////////////////////////////////

    // COMPARACAO

    printf("\nRESULTADO DAS COMPARACOES\n");

    // População
    if (populacao1 > populacao2)
        printf("Populacao: %s venceu!\n", nomeCidade1);
    else if (populacao2 > populacao1)
        printf("Populacao: %s venceu!\n", nomeCidade2);
    else
        printf("Populacao: Empatou!\n");

    // Área
    if (area1 > area2)
        printf("Area: %s venceu!\n", nomeCidade1);
    else if (area2 > area1)
        printf("Area: %s venceu!\n", nomeCidade2);
    else
        printf("Area: Empatou\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: %s venceu!\n", nomeCidade1);
    else if (pib2 > pib1)
        printf("PIB: %s venceu!\n", nomeCidade2);
    else
        printf("PIB: Empatou\n");

    // Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: %s venceu!\n", nomeCidade1);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turisticos: %s venceu!\n", nomeCidade2);
    else
        printf("Pontos Turisticos: Empatou\n");

    // Densidade (MENOR vence)
    if (densidade1 < densidade2)
        printf("Densidade: %s venceu!\n", nomeCidade1);
    else if (densidade2 < densidade1)
        printf("Densidade: %s venceu!\n", nomeCidade2);
    else
        printf("Densidade: Empatou\n");

    // PIB per capita
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: %s venceu!\n", nomeCidade1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: %s venceu!\n", nomeCidade2);
    else
        printf("PIB per Capita: Empatou!\n");

    // VENCEDOR GERAL

    printf("VENCEDOR GERAL\n");

    if (superPoder1 > superPoder2)
        printf("Carta 1 venceu!\n");
    else if (superPoder2 > superPoder1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empatou\n");

    return 0;
}