#include <stdio.h>

int main() {
    printf("Novo commit nivel mestre");

    // Carta 1
    char estado1[50], codigo1[5], nomeCidade1[50];                                                 
    unsigned long int população1 = 0;                           
    float área1 = 0.0, pib1 = 0.0;                                                          
    float pontosTuristicos1 = 0.0;                    
    float densidade1 = 0.0, pibPercapita1 = 0.0, superPoder1 = 0.0;

    // Carta 2
    char estado2[50], codigo2[5], nomeCidade2[50];
    unsigned long int população2 = 0;
    float area2 = 0.0, pib2 = 0.0;
    int pontosTuristicos2 = 0;
    float densidade2 = 0.0, pibPercapita2 = 0.0, superPoder2 = 0.0;
    
    prinf("*** Cadastro de Cartas - Paises ***\n");
                             
    // Cadastro da carta 1
    printf("\nCadastro da carta 1: \n");
    printf("Codigo darta: ")
    scanf(" %s", codigo1);
    
    printf("Estado (letra de A H): ");
    scanf(" %s", estado1);

    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("População: ");
    scanf(" %lu", &população1);
    
    printf("Área (em km²): ");
    scanf(" %f", &área1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Pontos turisticos:");
    scanf(" %d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPercapita1 = PIB1 / (float)populacao1;
    superPoder1 = (float)população1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 (1.0 / densidade1);

    // cadastro de carta 2
    printf("\nCadastro da carta 2: \n");
    printf("Codigo darta: ")
    scanf(" %s", codigo2);
    
    printf("Estado (letra de A H): ");
    scanf(" %s", estado2);

    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("População: ");
    scanf(" %lu", &população2);
    
    printf("Área (em km²): ");
    scanf(" %f", &área2);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Pontos turisticos:");
    scanf(" %d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPercapita2 = PIB2 / (float)populacao2;
    superPoder2 = (float)população2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 (1.0 / densidade2);

    // Exibição das cartas 
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Àrea: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);
    printf("Super Poder: %.6f\n", superPoder1);
    
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Àrea: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPercapita2);
    printf("Super Poder: %.6f\n", superPoder2);

    // Comparações 
    printf("\nComparação de cartas:\n");
    printf("População: carta 1 venceu %d)\n", populacao1 > populacao2);
    printf("Área: carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Super Poder: (d)\n", superPoder1 > superPoder2);
        
    printf("\nCadastro conclído com sucesso!\n");

    return 0;
}