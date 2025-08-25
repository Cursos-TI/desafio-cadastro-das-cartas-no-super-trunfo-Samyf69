#include <stdio.h>

// Desafio Super Trunfo - Cidade
// Tema 1 - Cadastro das Cartas
//Teste Samuel

int main() {
    
    // Carta 1
    char Estado[23], Codigo[5], Cidade[31];
    unsigned long int Populacao;
    float Area, PIB, DensPopulacional, Capita, superPoder;
    int Turisticos;
    
    // Carta 2
    char Estado2[23], Codigo2[5], Cidade2[31];
    unsigned long int Populacao2;
    float Area2, PIB2, DensPopulacional2, Capita2, superPoder2;
    int Turisticos2; 
    

    // Cadastro da primeira carta:
    printf("Bem-vindo ao jogo Super Trunfo\n");
    printf("Cadastre sua primeira carta:\n");

    printf("\n--- Carta 01 ---\n");

    printf("Informe o código da carta:\n");
    scanf("%s", Codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%s", Cidade);

    printf("Informe o estado:\n");
    scanf("%s", Estado);

    printf("Informe a população:\n");
    scanf("%lu", &Populacao);

    printf("Informe a área em km²:\n");
    scanf("%f", &Area);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &Turisticos);

    // Cálculo da carta 1
    DensPopulacional = (float)Populacao / Area;
    Capita = PIB / (float)Populacao;
    superPoder = (float)Populacao + Area + PIB + Turisticos + Capita + (1 / DensPopulacional);

    // Cadastro da segunda carta
    printf("\nCadastre sua segunda carta:\n");

    printf("\n--- Carta 02 ---\n");

    printf("Informe o código da carta:\n");
    scanf("%s", Codigo2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", Cidade2);

    printf("Informe o estado:\n");
    scanf("%s", Estado2);

    printf("Informe a população:\n");
    scanf("%lu", &Populacao2);

    printf("Informe a área em km²:\n");
    scanf("%f", &Area2);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB2);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &Turisticos2);

    // Cálculo da carta 2
    DensPopulacional2 = (float)Populacao2 / Area2;
    Capita2 = PIB2 / (float)Populacao2;
    superPoder2 = (float)Populacao2 + Area2 + PIB2 + Turisticos2 + Capita2 + (1 / DensPopulacional2);

    // Exibição das cartas
    printf("\n--- Carta 01 ---\n");
    printf("Cidade: %s (%s)\n", Cidade, Estado);
    printf("População: %lu\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensPopulacional);
    printf("PIB per Capita: R$ %.2f\n", Capita);

    printf("\n--- Carta 02 ---\n");
    printf("Cidade: %s (%s)\n", Cidade2, Estado2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensPopulacional2);
    printf("PIB per Capita: R$ %.2f\n", Capita2);

    // Comparação (escolhendo População como atributo)
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", Cidade, Estado, Populacao);
    printf("Carta 2 - %s (%s): %lu habitantes\n", Cidade2, Estado2, Populacao2);

    if (Populacao > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade);
    } else if (Populacao2 > Populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}