#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Função para gerar uma carta aleatória para o PC
void gerarCartaComputador(float *populacao, float *pib, float *area) {
    *populacao = rand() % 100 + 1;  // População entre 1 e 100 milhões
    *pib = rand() % 1000 + 10;      // PIB entre 10 e 1000 bilhões
    *area = rand() % 10000 + 100;   // Área entre 100 e 10000 km²
}

int main() {
    srand(time(0)); // Gera número aleatório ( PC )

    float populacao, pib, area;
    char estado[50], cidade[50], codigo[10], pais[50];

    // Pede as informaçõe do jogador
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    printf("Digite a cidade: \n");
    scanf("%s", cidade);
    printf("Digite Código: \n");
    scanf("%s", codigo);
    printf("Digite o País: \n");
    scanf("%s", pais);
    printf("Digite População em milhões: \n");
    scanf("%f", &populacao);
    printf("Digite PIB em BI U$$: \n");
    scanf("%f", &pib);
    printf("Digite a área total em km²: \n");
    scanf("%f", &area);

    // Cálculos de densidade , pib e super poder (somatória)
    float densidade_populacional = populacao / area;
    float pibPerCapita = pib / populacao;
    float superPoder = populacao + pib + area;

    // Exibição os dados inseridos anteriormente
    printf("\n*-*-*-* DADOS INFORMADOS *-*-*-*\n");
    printf("Estado: %s | Cidade: %s | Código: %s | País: %s\n", estado, cidade, codigo, pais);
    printf("Área: %.1f km² | População: %.1f Mi | PIB: %.1f Bi U$$\n", area, populacao, pib);
    printf("--------------------------------------\n");

    printf("\n*-*-*-* CÁLCULOS *-*-*-*\n");
    printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.1f U$$\n", pibPerCapita);
    printf("Super Poder: %.1f\n", superPoder);
    printf("--------------------------------------\n");

    // Gerando carta aleatória do pc
    float populacaoComputador, pibComputador, areaComputador;
    gerarCartaComputador(&populacaoComputador, &pibComputador, &areaComputador);

    // Calculo automático de cartas do pc
    float densidadeComputador = populacaoComputador / areaComputador;
    float pibPerCapitaComputador = pibComputador / populacaoComputador;
    float superPoderComputador = populacaoComputador + pibComputador + areaComputador;

    // Mostra a carta do Pc
    printf("\n*-*-*-* CARTA COMPUTADOR *-*-*-*\n");
    printf("Populacao: %.1f milhões\n", populacaoComputador);
    printf("PIB: %.1f Bilhões de U$$\n", pibComputador);
    printf("Área: %.1f Km²\n", areaComputador);
    printf("Densidade Populacional: %.1f hab/km²\n", densidadeComputador);
    printf("PIB per Capita: %.1f U$$\n", pibPerCapitaComputador);
    printf("Super Poder: %.1f\n", superPoderComputador);
    printf("--------------------------------------\n");

    // Menu
    int opcao;
    printf("\nEscolha qual índice deseja comparar:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("6. Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação com o jogador
    switch (opcao) {
        case 1: // População
            if (populacao > populacaoComputador) printf("Você Venceu!\n");
            else if (populacao < populacaoComputador) printf("Computador Venceu!\n");
            else printf("Empate!\n");
            break;
        case 2: // PIB
            if (pib > pibComputador) printf("Você Venceu!\n");
            else if (pib < pibComputador) printf("Computador Venceu!\n");
            else printf("Empate!\n");
            break;
        case 3: // Área
            if (area > areaComputador) printf("Você Venceu!\n");
            else if (area < areaComputador) printf("Computador Venceu!\n");
            else printf("Empate!\n");
            break;
        case 4: // Densidade Populacional
            if (densidade_populacional < densidadeComputador)
                printf("Você venceu! Sua densidade populacional é menor\n");
            else if (densidade_populacional > densidadeComputador)
                printf("Você Perdeu! A densidade populacional dele é menor.\n");
            else printf("Empate!\n");
            break;
        case 5: // PIB per capita
            if (pibPerCapita > pibPerCapitaComputador) printf("Você Venceu!\n");
            else if (pibPerCapita < pibPerCapitaComputador) printf("Você Perdeu!\n");
            else printf("Empate!\n");
            break;
        case 6: // Super Poder
            if (superPoder > superPoderComputador) printf("Você Venceu!\n");
            else if (superPoder < superPoderComputador) printf("Você Perdeu!\n");
            else printf("Empate!\n");
            break;
        default:
            printf("Opção Inválida!\n");
    }

    return 0;
}
