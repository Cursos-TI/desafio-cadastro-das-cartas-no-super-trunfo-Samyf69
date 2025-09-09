// Desafio Super Trunfo - 
// Tema 3 - Implementando Comparações Avançadas com Atributos Múltiplos em C
//Teste Samuel Figueiredo Vieira

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Carta 01
    int opcao;
    char estado[32], codigo[25], cidade[51];
    unsigned long int populacao;
    float area, pib, densPopulacional, capita;
    int turistico;

    // Carta 02
    char estado2[32], codigo2[25], cidade2[51];
    unsigned long int populacao2;
    float area2, pib2, densPopulacional2, capita2;
    int turistico2;

    int atributo1, atributo2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    printf("Bem-vindo ao jogo Super Trunfo - Nivel Mestre!\n");
    printf("Escolha a opção:\n");
    printf("1. Iniciar o Jogo.\n");
    printf("2. Regras.\n");
    printf("3. Sair.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Início selecionado\n");

        // Cadastro da primeira carta
        printf("\n--- Carta 01 ---\n");
        printf("Informe o código da carta: ");
        scanf(" %s", codigo);
        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", cidade);
        printf("Informe o estado: ");
        scanf(" %[^\n]", estado);
        printf("Informe a população: ");
        scanf("%lu", &populacao);
        printf("Informe a área em km²: ");
        scanf("%f", &area);
        printf("Informe o PIB: ");
        scanf("%f", &pib);
        printf("Informe a quantidade de pontos turísticos: ");
        scanf("%d", &turistico);

        densPopulacional = (float)populacao / area;
        capita = pib / (float)populacao;

        // Cadastro da segunda carta
        printf("\n--- Carta 02 ---\n");
        printf("Informe o código da carta: ");
        scanf(" %s", codigo2);
        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", cidade2);
        printf("Informe o estado: ");
        scanf(" %[^\n]", estado2);
        printf("Informe a população: ");
        scanf("%lu", &populacao2);
        printf("Informe a área em km²: ");
        scanf("%f", &area2);
        printf("Informe o PIB: ");
        scanf("%f", &pib2);
        printf("Informe a quantidade de pontos turísticos: ");
        scanf("%d", &turistico2);

        densPopulacional2 = (float)populacao2 / area2;
        capita2 = pib2 / (float)populacao2;

        // Exibição das cartas
        printf("\n--- Carta 01 ---\n");
        printf("Cidade: %s\n", cidade);
        printf("Estado: %s\n", estado);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: R$ %.2f bilhões\n", pib);
        printf("Pontos Turísticos: %d\n", turistico);
        printf("Densidade Populacional: %.2f hab/km²\n", densPopulacional);
        printf("PIB per Capita: R$ %.2f\n", capita);

        printf("\n--- Carta 02 ---\n");
        printf("Cidade: %s\n", cidade2);
        printf("Estado: %s\n", estado2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", pib2);
        printf("Pontos Turísticos: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densPopulacional2);
        printf("PIB per Capita: R$ %.2f\n", capita2);

        // Escolha dos atributos
        printf("\nEscolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional (vence menor valor)\n");
        printf("6 - PIB per Capita\n");
        printf("Digite sua escolha: ");
        scanf("%d", &atributo1);

        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        scanf("%d", &atributo2);

        if (atributo1 == atributo2) {
            printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
            break;
        }

        // Função auxiliar: atribuir valores conforme escolha
        switch (atributo1) {
            case 1: valor1_c1 = populacao; valor1_c2 = populacao2; break;
            case 2: valor1_c1 = area; valor1_c2 = area2; break;
            case 3: valor1_c1 = pib; valor1_c2 = pib2; break;
            case 4: valor1_c1 = turistico; valor1_c2 = turistico2; break;
            case 5: valor1_c1 = densPopulacional; valor1_c2 = densPopulacional2; break;
            case 6: valor1_c1 = capita; valor1_c2 = capita2; break;        
        }

        switch (atributo2) {
            case 1: valor2_c1 = populacao; valor2_c2 = populacao2; break;
            case 2: valor2_c1 = area; valor2_c2 = area2; break;
            case 3: valor2_c1 = pib; valor2_c2 = pib2; break;
            case 4: valor2_c1 = turistico; valor2_c2 = turistico2; break;
            case 5: valor2_c1 = densPopulacional; valor2_c2 = densPopulacional2; break;
            case 6: valor2_c1 = capita; valor2_c2 = capita2; break;
        }

        // Comparação e soma
        soma1 = valor1_c1 + valor2_c1;
        soma2 = valor1_c2 + valor2_c2;

        // Regra da densidade populacional: vence o menor valor
        if (atributo1 == 5) {
            if (valor1_c1 < valor1_c2) soma1 += 1; else soma2 += 1;
        }
        if (atributo2 == 5) {
            if (valor2_c1 < valor2_c2) soma1 += 1; else soma2 += 1;
        }

        printf("\n--- Resultado da Comparação ---\n");
        printf("%s (%s) -> Atributos escolhidos: %.2f e %.2f | Soma: %.2f\n", cidade, estado, valor1_c1, valor2_c1, soma1);
        printf("%s (%s) -> Atributos escolhidos: %.2f e %.2f | Soma: %.2f\n", cidade2, estado2, valor1_c2, valor2_c2, soma2);

        if (soma1 > soma2)
            printf("\nResultado final: Carta 1 (%s) venceu!\n", cidade);
        else if (soma2 > soma1)
            printf("\nResultado final: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("\nResultado final: Empate!\n");

        break;

    case 2:
        printf("Regras selecionadas\n");
        break;

    case 3:
        printf("Opção sair\n");
        break;

    default:
        printf("Opção inválida!\n");
    }

    return 0;

}