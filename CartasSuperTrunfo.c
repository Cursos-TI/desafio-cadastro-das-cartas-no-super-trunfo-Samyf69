#include <stdio.h>

// Desafio Super Trunfo - Cidade
// Tema 1 - Cadastro das Cartas
//Teste Samuel

#include <stdio.h>

int main() {
    
    // Carta 1
    char Estado[23];
    char Codigo[5];
    char Cidade[31];
    int Populacao;
    float Area;
    float PIB;
    int Turisticos; 

    // Carta 2
    char Estado2[23];
    char Codigo2[5];
    char Cidade2[31];
    int Populacao2;
    float Area2;
    float PIB2;
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
    scanf("%d", &Populacao);

    printf("Informe a área em km²:\n");
    scanf("%f", &Area);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &Turisticos);

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
    scanf("%d", &Populacao2);

    printf("Informe a área em km²:\n");
    scanf("%f", &Area2);

    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &PIB2);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &Turisticos2);

     // Exibição das cartas
     // Exibição Carta 1
    printf("\n--- Carta cadastrada com sucesso! ---\n");
    printf("Código da Carta: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Estado: %s\n", Estado);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB (Desempenho Econômico): R$ %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", Turisticos);

     // Exibição Carta 2
    printf("\n--- Carta 02 ---\n");
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Estado: %s\n", Estado2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", Turisticos2);

    return 0;
}
