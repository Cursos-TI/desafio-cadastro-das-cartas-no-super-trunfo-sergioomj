#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Função para gerar uma carta aleatória para o computador
void gerarCartaComputador(float *populacao, float *pib, float *area, float *densidadePopulacional,
float *pibPerCapita, float *superPoder){
    //Gera valores aleatórios para a carta do computador
*populacao = rand() % 100 + 1; //população entre 1 e 100 Mi
*pib = rand () % 1000 + 10; // PIB entre 10 e 1000 bilhões
*area = rand () % 10000 + 100; // área entre 100 e 10000 km²
//calculos automaticos
*densidadePopulacional = *populacao / *area;
*pibPerCapita = *pib / *populacao;
*superPoder = *populacao + *pib + *area;

}

int main(){
    srand(time(0)); //Inicializa o gerador de números aleatórios

    float populacao, pib, area;
    char cidade[50], codigo[10], pais[50];

    //solicita e lê os dados do usuário

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);
    printf("Digite Código: \n");
    scanf("%s", &codigo);
    printf("Digite o País: \n");
    scanf("%s", &pais);
    printf("Digite População em milhões: \n");
    scanf("%f", &populacao);
    printf("Digite PIB em BI U$$: \n");
    scanf("%f", &pib);
    printf("Digite a área total em km²: \n");
    scanf("%f", &area);

    //Cálculos automáticos
    float densidade_populacional = populacao / area;
    float PibPerCapita = pib / populacao;
    float superPoder = populacao + pib + area;

    //exibição de dados informados
    printf("Dados informados: \n");
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", codigo);
    printf("País: %s\n", pais);
    printf("Área em Km²: %.2f\n", area);
    printf("População em Mi.: %.2f\n", populacao);
    printf("PIB em Bi U$$: %.2f\n", pib);
    //exibe os cálculos
    printf("Cálculos: \n");
    printf("Densidade Populacional km²: %.2f\n", densidade_populacional);
    printf("PIB per capita U$$ por habitante: %.2f\n", PibPerCapita);
    printf("Super Poder: %.2f\n", superPoder);
    // Gerando carta aleatória para o Computador
    float populacaoComputador, pibComputador, areaComputador;
    float densidadeComputador, pibPerCapitaComputador, superPoderComputador;
    gerarCartaComputador(&populacaoComputador, &pibComputador, &areaComputador, &densidadeComputador
    , &pibPerCapitaComputador, &superPoderComputador);

    // Exibe os dados da carta do Computador
    printf("Carta Computador:\n");
    printf("Populacao: %.2f milhões\n", populacaoComputador);
    printf("PIB: %.2f Bilhões de U$$\n", pibComputador);
    printf("Área: %.2f Km²\n", areaComputador);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeComputador);
    printf("PIB per Capita: %.2fbilhões de US$ por milhão de habitantes\n", pibPerCapitaComputador);
    printf("Super Poder: %.2f\n", superPoderComputador);

    //Menu de comparações
    int opcao;
    printf("Escolha qual índice deseja comparar:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Densidade Populacional\n" );
    printf("5. PIB per Capita\n");
    printf("6. Super Poder\n");
    scanf("%d", &opcao);
    //Comparação com o usuário
    switch (opcao)
    {
    case 1: // População
        if (populacao > populacaoComputador){
            printf("Você Venceu! \n");
        }else if (populacao < populacaoComputador){
            printf("Computador Venceu!\n");
        }else{
            printf("Empate!\n");
        }
        break;
        case 2: //PIB
        if (pib > pibComputador){
            printf("Você venceu!\n");
        }else if (pib < pibComputador){
            printf("Computador Venceu!\n");
        }else {
            printf("Empate!\n");
        }
            break;
            case 3: // Área
            if(area > areaComputador){
                printf("Você Venceu!\n");
            }else if (pib < pibComputador){
                printf("Você Perdeu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
            case 4: // Densidade Populacional
            if(densidade_populacional < densidadeComputador){
                printf("Você venceu! Sua densidade populacional é menor\n");
            }else if (densidade_populacional > densidadeComputador){
                printf("Você Perdeu! A densidade populacional dele é menor.n\n");
            }else {
                printf("Empate!");
            }
            break;
            case 5: //PIB per capita
            if(PibPerCapita > pibPerCapitaComputador){
                printf("Você Venceu!\n");
            }else if(PibPerCapita < pibPerCapitaComputador){
                printf("Você Perdeu!\n");
            }else {
                printf("Empate!\n");
            }
            break;
            case 6: // Super poder
            if(superPoder > superPoderComputador){
                printf("Você Venceu!\n");
            }else if(superPoder < superPoderComputador){
                printf("Você Perdeu!\n");
            }else{
                printf("Empate!\n");
            }
            break;
            default:
            printf("Opção Inválida!\n");
    }

    return 0;
}
