#include <stdio.h>



int main() {
    // Carta 1
    char estado1; 
    char codigo1[5];
    char nomecidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;

    // Dados Carta 1

    printf("Carta 1\n");
    printf("Digite o estado:");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta:");
    scanf("%s", &codigo1); 

    printf("Digite o nome da cidade:");
    scanf("%s", &nomecidade1);

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a area em km²:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:");
    scanf("%d", &pontosturisticos1);

    // Dados Carta 2

    printf("Carta 2\n");
    printf("Digite o estado:");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta:");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nomecidade2);
    
    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a area em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:");
    scanf("%d", &pontosturisticos2);

    // Calculos

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;


    // Ler dados cadastrados

    printf("\n\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %2.f reais\n", pibpercapita2);


    return 0;
}
