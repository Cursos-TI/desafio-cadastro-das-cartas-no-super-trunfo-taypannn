#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[10];
    char nome1[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[10];
    char nome2[100];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &
