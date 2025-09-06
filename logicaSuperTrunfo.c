#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado_1[3];
    char codigo_1[4];
    char nome_Cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_Turisticos_1;
    float densidade_1;
    float pib_per_capita_1;

    // Declaração das variáveis da Carta 2
    char estado_2[3];
    char codigo_2[4];
    char nome_Cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_Turisticos_2;
    float densidade_2;
    float pib_per_capita_2;

    // Entrada de dados da Carta 1
    printf("Digite o Estado da Carta 1: ");
    scanf("%2s", estado_1);

    printf("Digite o Código da Carta 1: ");
    scanf("%3s", codigo_1);

    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf("%s", nome_Cidade_1);

    printf("Digite a População da Carta 1: ");
    scanf("%d", &populacao_1);

    printf("Digite a Área da Carta 1 (km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB da Carta 1 (em bilhões): ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &pontos_Turisticos_1);

    // Cálculos
    densidade_1 = populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1e9) / populacao_1;

    // Entrada de dados da Carta 2
    printf("\nDigite o Estado da Carta 2: ");
    scanf("%2s", estado_2);

    printf("Digite o Código da Carta 2: ");
    scanf("%3s", codigo_2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf("%s", nome_Cidade_2);

    printf("Digite a População da Carta 2: ");
    scanf("%d", &populacao_2);

    printf("Digite a Área da Carta 2 (km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB da Carta 2 (em bilhões): ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &pontos_Turisticos_2);

    // Cálculos
    densidade_2 = populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1e9) / populacao_2;

    // Menu interativo
    int opcao1, opcao2;
    printf("\n=== SUPER TRUNFO: Comparação de Cartas ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Segundo menu (dinâmico)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == opcao1) continue; // não mostra o mesmo atributo
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica (menor vence)\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Função auxiliar inline para pegar valores numéricos dos atributos
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    switch (opcao1) {
        case 1: valor1_c1 = populacao_1; valor1_c2 = populacao_2; break;
        case 2: valor1_c1 = area_1; valor1_c2 = area_2; break;
        case 3: valor1_c1 = pib_1; valor1_c2 = pib_2; break;
        case 4: valor1_c1 = pontos_Turisticos_1; valor1_c2 = pontos_Turisticos_2; break;
        case 5: valor1_c1 = densidade_1; valor1_c2 = densidade_2; break;
        case 6: valor1_c1 = pib_per_capita_1; valor1_c2 = pib_per_capita_2; break;
    }
    switch (opcao2) {
        case 1: valor2_c1 = populacao_1; valor2_c2 = populacao_2; break;
        case 2: valor2_c1 = area_1; valor2_c2 = area_2; break;
        case 3: valor2_c1 = pib_1; valor2_c2 = pib_2; break;
        case 4: valor2_c1 = pontos_Turisticos_1; valor2_c2 = pontos_Turisticos_2; break;
        case 5: valor2_c1 = densidade_1; valor2_c2 = densidade_2; break;
        case 6: valor2_c1 = pib_per_capita_1; valor2_c2 = pib_per_capita_2; break;
    }

    // Exibição dos valores escolhidos
    printf("\n=== COMPARAÇÃO ===\n");
    printf("Carta 1: %s (%s)\n", nome_Cidade_1, estado_1);
    printf("Carta 2: %s (%s)\n\n", nome_Cidade_2, estado_2);

    printf("Atributo %d -> Carta1: %.2f | Carta2: %.2f\n", opcao1, valor1_c1, valor1_c2);
    printf("Atributo %d -> Carta1: %.2f | Carta2: %.2f\n", opcao2, valor2_c1, valor2_c2);

    // Soma final
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nome_Cidade_1, soma_c1);
    printf("Carta 2 (%s): %.2f\n", nome_Cidade_2, soma_c2);

    // Regra especial da densidade demográfica (menor vence)
    // Se for escolhida, inverte a lógica de comparação
    if (opcao1 == 5) soma_c1 = -valor1_c1 + soma_c1 - valor1_c1; 
    if (opcao2 == 5) soma_c1 = -valor2_c1 + soma_c1 - valor2_c1; 
    if (opcao1 == 5) soma_c2 = -valor1_c2 + soma_c2 - valor1_c2; 
    if (opcao2 == 5) soma_c2 = -valor2_c2 + soma_c2 - valor2_c2; 

    // Resultado final
    if (soma_c1 > soma_c2)
        printf("\n>>> Vencedor: Carta 1 (%s) <<<\n", nome_Cidade_1);
    else if (soma_c2 > soma_c1)
        printf("\n>>> Vencedor: Carta 2 (%s) <<<\n", nome_Cidade_2);
    else
        printf("\n>>> Empate! <<<\n");

    return 0;
}

