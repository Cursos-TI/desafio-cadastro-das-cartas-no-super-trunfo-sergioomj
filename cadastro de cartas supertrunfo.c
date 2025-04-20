#include <stdio.h>

int main() {
    // Primeira carta
    char estado1[20];  
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Segunda carta
    char estado2[20];  
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // adicionar informações da primeira carta
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado: ");
    scanf(" %49[^\n]", estado1);  // lê o nome completo do estado com espaços
    
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);  // lê o nome da cidade com espaços
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área em km²:\n ");
    scanf("%f", &area1);
    
    printf("PIB em bilhões de reais:\n ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // adicionar dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    
    printf("Estado: ");
    scanf(" %49[^\n]", estado2);   // lê nome do estado com espaços
    
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);   // lê nome da cidade com espaços
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área em km²:\n ");
    scanf("%f", &area2);
    
    printf("PIB em bilhões de reais:\n ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // mostra informações totais das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}