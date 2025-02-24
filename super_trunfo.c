#include <stdio.h>

int main() {
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    char tempCodigo1[5];
    int populacao1, pontosTuristicos1;
    float area1, PIB1;

    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    char tempCodigo2[5];
    int populacao2, pontosTuristicos2;
    float area2, PIB2;

    // Carta 1

    printf("-----------------------------------------\n");
    printf("                CARTA 1\n");
    printf("-----------------------------------------\n");

    printf("Escolha uma letra entre 'A' e 'H': \n");
    scanf(" %c", &estado1);

    printf("Escolha um número entre 01 e 04: \n");
    scanf("%4s", tempCodigo1);

    snprintf(codigoCarta1, sizeof(codigoCarta1), "%c%s", estado1, tempCodigo1);

    printf("Escolha o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("-----------------------------------------\n");
    printf("                CARTA 2\n");
    printf("-----------------------------------------\n");

    printf("Escolha uma letra entre 'A' e 'H': \n");
    scanf(" %c", &estado2);

    printf("Escolha um número entre 01 e 04: \n");
    scanf("%4s", tempCodigo2);

    snprintf(codigoCarta2, sizeof(codigoCarta2), "%c%s", estado2, tempCodigo2);

    printf("Escolha o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n-----------------------------------------\n\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n-----------------------------------------\n\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
}
