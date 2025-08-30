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
    int opcao;
    printf("\n=== SUPER TRUNFO: Comparação de Cartas ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação de Cartas ===\n");

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", nome_Cidade_1, estado_1, populacao_1);
            printf("Carta 2 - %s (%s): %d habitantes\n", nome_Cidade_2, estado_2, populacao_2);
            if (populacao_1 > populacao_2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_Cidade_1);
            else if (populacao_2 > populacao_1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_Cidade_2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nome_Cidade_1, estado_1, area_1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nome_Cidade_2, estado_2, area_2);
            if (area_1 > area_2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_Cidade_1);
            else if (area_2 > area_1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_Cidade_2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", nome_Cidade_1, estado_1, pib_1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", nome_Cidade_2, estado_2, pib_2);
            if (pib_1 > pib_2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_Cidade_1);
            else if (pib_2 > pib_1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_Cidade_2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%s): %d pontos\n", nome_Cidade_1, estado_1, pontos_Turisticos_1);
            printf("Carta 2 - %s (%s): %d pontos\n", nome_Cidade_2, estado_2, pontos_Turisticos_2);
            if (pontos_Turisticos_1 > pontos_Turisticos_2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_Cidade_1);
            else if (pontos_Turisticos_2 > pontos_Turisticos_1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_Cidade_2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome_Cidade_1, estado_1, densidade_1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome_Cidade_2, estado_2, densidade_2);
            if (densidade_1 < densidade_2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_Cidade_1);
            else if (densidade_2 < densidade_1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_Cidade_2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): %.2f R$/hab\n", nome_Cidade_1, estado_1, pib_per_capita_1);
            printf("Carta 2 - %s (%s): %.2f R$/hab\n", nome_Cidade_2, estado_2, pib_per_capita_2);
            if (pib_per_capita_1 > pib_per_capita_2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_Cidade_1);
            else if (pib_per_capita_2 > pib_per_capita_1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_Cidade_2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
