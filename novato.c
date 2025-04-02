#include <stdio.h>
#include <string.h>

int main(){
    char codigoCarta[3];
    char estado[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Cadastre a Carta 1:\n");
    printf("Digite o Estado:"); //entrada de dados pelo usuário
    scanf("%s", estado); // captura do que foi informado

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:");
    getchar(); // Limpa o buffer antes de fgets
    fgets(nomeCidade, sizeof(nomeCidade), stdin); // Usa fgets para strings com espaço
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%d", &populacao);

    printf("Digite a área (km²):");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos);

    printf("* Carta cadastrada com sucesso! *\n"); //confirmação após carta ser cadastrada
    printf("Carta 1:\n"); //apresentação da carta
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("--------------------------------------------\n");

    printf("Cadastre a Carta 2:\n"); // cadastro da segunda carta
    printf("Digite o Estado:");
    scanf(" %s", estado);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:");
    getchar();
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; 

    printf("Digite a população:");
    scanf("%d", &populacao);

    printf("Digite a área (km²):");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos);

    printf("* Carta cadastrada com sucesso! *\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    return 0;

}