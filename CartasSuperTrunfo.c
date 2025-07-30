int main() {
    char estado [50];                        //Letra de 'A' a 'H' 
    char codigodascartas [04];              //Ex: "A01", B02
    char nomeCidade [50];                    //Nome da cidade
    int população;                           //População da cidade
    float área;                              //Area em km²
    float PIB;                               //PIB em bilhões de reais
    int pontosTuricos;                        //Quantidade de pontos turisticos 

    
    printf("cadastro da carta 1: \n");
    scanf(" %s", codigodascartas);
    
    printf("Digite o nome do estado (letra de A H): \n");
    scanf(" %s", estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomeCidade);

    printf("Digite o número da população: \n");
    scanf(" %d", &população);
    

    printf("Digite o número da área em km²: \n");
    scanf(" %f", &área);

    printf("PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos:");
    scanf(" %d", &pontosTuricos);

    printf("\nCadastro da carta 2: \n");
    scanf(" %s", codigodascartas);

    printf("Digite o nome do estado (letra de A H): \n");
    scanf(" %s", estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomeCidade);

    printf("Digite o número da população: \n");
    scanf(" %d", &população);

    printf("Digite o número da área em km²: \n");
    scanf(" %f", &área);

    printf("PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos:");
    scanf(" %d", &pontosTuricos); 
  
  
    
    return 0;
}