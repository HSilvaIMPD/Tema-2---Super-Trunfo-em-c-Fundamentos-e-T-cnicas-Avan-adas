#include <stdio.h>

int main() {

    // Carta 1 
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    //////////////////

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;


    //DADOS - CARTA 1

    printf("Carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //DADOS - CARTA 2

    printf("Carta 2\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    //CALCULOS

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = (float)populacao1 +
                  area1 +
                  pib1 +
                  pontosTuristicos1 +
                  pibPerCapita1 +
                  (1.0 / densidade1);

    superPoder2 = (float)populacao2 +
                  area2 +
                  pib2 +
                  pontosTuristicos2 +
                  pibPerCapita2 +
                  (1.0 / densidade2);


    //CARTAS

    printf("CARTA 1\n");
    printf("Nome: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade: %.2f\n", densidade1);

    printf("CARTA 2\n");
    printf("Nome: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade: %.2f\n", densidade2);


    
    // COMPARAÇÃO COM 1 ATRIBUTO

    int opcao;

    printf("COMPARACAO DAS CARTAS\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade (menor vence)\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("RESULTADO:\n");

    switch(opcao){

        case 1:
            printf("Populacao: %lu x %lu\n", populacao1, populacao2);
            printf("Vencedor: %s\n",
                   (populacao1 > populacao2) ? nomeCidade1 :
                   (populacao2 > populacao1) ? nomeCidade2 : "Empatou");
        break;

        case 2:
            printf("Area: %.2f x %.2f\n", area1, area2);
            printf("Vencedor: %s\n",
                   (area1 > area2) ? nomeCidade1 :
                   (area2 > area1) ? nomeCidade2 : "Empatou"); 
        break;
//
        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            printf("Vencedor: %s\n",
                   (pib1 > pib2) ? nomeCidade1 :
                   (pib2 > pib1) ? nomeCidade2 : "Empatou");
        break;
////
        case 4:
            printf("Pontos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            printf("Vencedor: %s\n",
                   (pontosTuristicos1 > pontosTuristicos2) ? nomeCidade1 :
                   (pontosTuristicos2 > pontosTuristicos1) ? nomeCidade2 : "Empatou");
        break;

        case 5:
            printf("Densidade: %.2f x %.2f\n", densidade1, densidade2);
            printf("Vencedor: %s\n",
                   (densidade1 < densidade2) ? nomeCidade1 :
                   (densidade2 < densidade1) ? nomeCidade2 : "Empatou");
        break;

        default:
            printf("Voce errou rapaz!!! Opcao invalida!\n");
    }


    
    // COMPARAÇÃO COM DOIS ATRIBUTOS

    int a1, a2;
    float soma1 = 0, soma2 = 0;

    printf("COMPARACAO FINAL (2 ATRIBUTOS)\n");

    printf("Primeiro atributo (1-5): ");
    scanf("%d", &a1);

    printf("Segundo atributo (1-5): ");
    scanf("%d", &a2);

    if(a1 == a2){
        printf("Achou que eu era bobo malandro !!!Voce escolheu o mesmo atributo duas vezes\n");
        return 0;
    }

    // PRIMEIRO ATRIBUTO
    switch(a1){
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += pontosTuristicos1; soma2 += pontosTuristicos2; break;
        case 5: soma1 += 1/densidade1; soma2 += 1/densidade2; break;
        default: printf("Errou feio!!! Opcao invalida\n"); return 0;
    }

    // SEGUNDO ATRIBUTO
    switch(a2){
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += pontosTuristicos1; soma2 += pontosTuristicos2; break;
        case 5: soma1 += 1/densidade1; soma2 += 1/densidade2; break;
        default: printf("Deu ruim!!! Opcao errada\n"); return 0;
    }

    printf("Soma Carta 1: %.2f\n", soma1);
    printf("Soma Carta 2: %.2f\n", soma2);

    printf("Vencedor Final: %s\n",
           (soma1 > soma2) ? nomeCidade1 :
           (soma2 > soma1) ? nomeCidade2 : "Empatou");

    return 0;
}