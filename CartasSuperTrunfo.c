int main() {
    // Carta 1
    char estado [50];                        
    char codigodascartas [04];              
    char nomeCidade [50];                    
    int população1 = 0;                           
    float área1 = 0.0;                              
    float PIB1 = 0.0;                               
    float pontosTuricos1 = 0.0;                    
    float densidade1 = 0.0;
    float pibPercapita1 = 0.0;

    // Carta 2
    char estado2[50];
    char codigo2[5];
    char nomeCidade2[50]
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    float pontoTuristicos2 = 0.0;
    float densidade2 = 0.0;
    float pibPercapita2 = 0.0;

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
    scanf(" %d", &população1);
    
    printf("Área (em km²): ");
    scanf(" %f", &área1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Pontos turisticos:");
    scanf(" %d", &pontosTuricos1);

    densidade1 = populacao1 / area1;
    pibPercapita = PIB1 / populacao1;

    // cadastro de carta 2
    printf("\nCadastro da carta 2: \n");
    ptintf("codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Estado (letra de A H): ");
    scanf(" %s", estado2);

    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões):");
    scanf(" %f", &PIB2);

    printf("Pontos turisticos: ");
    scanf(" %d", &pontosTuricos2);
    
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo os dados da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Àrea: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %s\n", pontosTuristicos1);
    printf("Densidade populacional: %.sf hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    
    // Exibindo os dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita);
    
    printf("\nCadastro conclído com sucesso!\n");

    return 0;
}