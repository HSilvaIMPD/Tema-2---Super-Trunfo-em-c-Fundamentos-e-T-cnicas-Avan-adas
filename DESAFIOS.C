#include <stdio.h>

int main() {

    //NÍVEL NOVATO
    //Cadastro e exibição de duas cartas

    //DECLARAÇÃO DAS VARIÁVEIS

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;   
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ENTRADA DE DADOS - CARTA 1
    printf("CARTA 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //ENTRADA DE DADOS - CARTA 2
    printf("\n=========== CARTA 2 ===========\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //(NÍVEL NOVATO)
    printf("\nDADOS CADASTRADOS\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    //NÍVEL AVENTUREIRO
    //Cálculo de Densidade e PIB per Capita

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    printf("\nCALCULOS\n");

    printf("\nCarta 1:\n");
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //NÍVEL MESTRE
    //Super Poder + Comparações

    float superPoder1, superPoder2;

    superPoder1 = (float) populacao1 +
                  area1 +
                  pib1 +
                  (float) pontosTuristicos1 +
                  pibPerCapita1 +
                  (1.0 / densidade1);

    superPoder2 = (float) populacao2 +
                  area2 +
                  pib2 +
                  (float) pontosTuristicos2 +
                  pibPerCapita2 +
                  (1.0 / densidade2);

    printf("\nSUPER PODER\n");
    printf("Super Poder Carta 1: %.2f\n", superPoder1);
    printf("Super Poder Carta 2: %.2f\n", superPoder2);

    printf("\nCOMPARACAO DE CARTAS =\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}