#include <stdio.h>
#include <string.h>

int main(){
    char codigoCarta1[4], codigoCarta2[4];
    char estado1[50], estado2[50];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTur1, pontosTur2;
    float area1, area2, pib1, pib2, densiPop1, densiPop2, pibPerCapita1, pibPerCapita2, superpoder1, superpoder2;

    printf("Cadastre a Carta 1:\n");
    printf("Digite o Estado:"); //entrada de dados pelo usuário
    scanf("%s", estado1); // captura do que foi informado

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:");
    getchar(); // Limpa o buffer antes de fgets
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Usa fgets para strings com espaço
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a área (km²):");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTur1);

    //cálculos carta 1:
    densiPop1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTur1 + pibPerCapita1 + (1.0 / densiPop1);

    
    //cálculos carta 2:
    densiPop2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTur2 + pibPerCapita2 + (1.0 / densiPop2);

    printf("\n==============================================================\n");
    printf("                   Carta cadastrada com sucesso!                \n"); //confirmação após carta ser cadastrada
    printf("                           Carta 1:\n"                             ); //apresentação da carta
    printf("\n==============================================================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); //exibe valores unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);
    printf("Densidade populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");

    printf("Cadastre a Carta 2:\n"); // cadastro da segunda carta
    printf("Digite o Estado:");
    scanf(" %s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:");
    getchar();
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; 

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a área (km²):");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTur2);

    printf("\n==============================================================\n");
    printf("                 Carta cadastrada com sucesso!                  \n");
    printf("                           Carta 2:\n"                             );
    printf("\n==============================================================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);
    printf("Densidade populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    printf("\n==============================================================\n");
    printf("-------                 HORA DO DUELO                  -------\n");
    printf("\n==============================================================\n");

    printf("População: %d", populacao1 > populacao2);
    if(populacao1 > populacao2 == 1){
        printf(" - A Carta 1 venceu\n");
    } else {
        printf(" - A Carta 2 venceu\n");
    }
    //População carta 1 > População carta 2? (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence)

    printf("Área: %d", area1 > area2);
    if(area1 > area2 == 1){
        printf(" - A Carta 1 venceu\n");
    } else {
        printf(" - A Carta 2 venceu\n");
    }
    // 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence

    printf("PIB: %d", pib1 > pib2);
    if(pib1 > pib2 == 1){
        printf(" - A Carta 1 venceu\n");
    } else {
        printf(" - A Carta 2 venceu\n");
    }
    //1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence

   printf("Pontos Turísticos: %d", pontosTur1 > pontosTur2);
   if(pontosTur1 > pontosTur2 == 1){
    printf(" - A Carta 1 venceu\n");
    } else {
    printf(" - A Carta 2 venceu\n");
    }
   //1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence

    printf("Densidade populacional: %d", densiPop1 > densiPop2);
    if(densiPop1 > densiPop2 == 1){
        printf(" - A Carta 2 venceu\n");
    } else {
        printf(" - A Carta 1 venceu\n");
    }
    //1 para verdadeiro – Carta 2 vence – e 0 para falso – Carta 1 vence

    printf("PIB per Capita: %d", pibPerCapita1 > pibPerCapita2);
    if(pibPerCapita1 > pibPerCapita2 == 1){
        printf(" - A Carta 1 venceu\n");
    } else {
        printf(" - A Carta 2 venceu\n");
    }
    //1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence
    

    printf("Super Poder: %d", superpoder1 > superpoder2);
    if(superpoder1 > superpoder2 == 1){
        printf(" - A Carta 1 venceu\n");
    } else {
        printf(" - A Carta 2 venceu\n");
    }
    //1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence

    return 0;

}