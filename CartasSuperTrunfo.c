#include <stdio.h>

int main() {
    float populacao, pib, area;
    char cidade[50], codigo[10], pais[50];

    // Solicita e lê os dados do usuário
    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite o código: \n");
    scanf("%s", codigo);

    printf("Digite o país: \n");
    scanf("%s", pais);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite a população (em milhões): \n");
    scanf("%f", &populacao);

    printf("Digite o PIB (em bilhões de US$): \n");
    scanf("%f", &pib);

    // Cálculos automáticos
    float densidade_populacional = populacao / area; // Densidade populacional
    float pib_per_capita = pib / populacao;          // PIB per capita

    // Exibe os dados informados
    printf("\nDados informados:\n");
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", codigo);
    printf("País: %s\n", pais);
    printf("Área em km²: %f\n", area);
    printf("População (em milhões): %f\n", populacao);
    printf("PIB (em bilhões de US$): %f\n", pib);

    // Exibe os cálculos
    printf("Densidade Populacional (hab/km²): %f\n", densidade_populacional);
    printf("PIB per Capita (US$ por habitante): %f\n", pib_per_capita);

    return 0;
}