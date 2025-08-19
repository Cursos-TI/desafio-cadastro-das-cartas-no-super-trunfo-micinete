#include <stdio.h>

// Estrutura para representar uma carta
typedef struct {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularAtributos(Carta* carta) {
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / (float)carta->populacao;
}

// Função para comparar duas cartas com base em um atributo escolhido
void compararCartas(Carta* carta1, Carta* carta2) {
    // Escolha do atributo para comparação (neste caso, população)
    unsigned long int atributoCarta1 = carta1->populacao;
    unsigned long int atributoCarta2 = carta2->populacao;

    // Determinar a carta vencedora
    if (atributoCarta1 > atributoCarta2) {
        printf("Comparação de cartas (atributo: população):\n");
        printf("Carta 1 - %s (%s): %lu\n", carta1->nomeCidade, carta1->estado, atributoCarta1);
        printf("Carta 2 - %s (%s): %lu\n", carta2->nomeCidade, carta2->estado, atributoCarta2);
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1->nomeCidade);
    } else if (atributoCarta2 > atributoCarta1) {
        printf("Comparação de cartas (atributo: população):\n");
        printf("Carta 1 - %s (%s): %lu\n", carta1->nomeCidade, carta1->estado, atributoCarta1);
        printf("Carta 2 - %s (%s): %lu\n", carta2->nomeCidade, carta2->estado, atributoCarta2);
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2->nomeCidade);
    } else {
        printf("Comparação de cartas (atributo: população):\n");
        printf("Carta 1 - %s (%s): %lu\n", carta1->nomeCidade, carta1->estado, atributoCarta1);
        printf("Carta 2 - %s (%s): %lu\n", carta2->nomeCidade, carta2->estado, atributoCarta2);
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Definição das duas cartas
    Carta carta1 = {
        .estado = "SP",
        .codigo = "001",
        .nomeCidade = "São Paulo",
        .populacao = 12300000,
        .area = 1521.1,
        .pib = 1234.56,
        .pontosTuristicos = 10
    };

    Carta carta2 = {
        .estado = "RJ",
        .codigo = "002",
        .nomeCidade = "Rio de Janeiro",
        .populacao = 6000000,
        .area = 1200.0,
        .pib = 900.0,
        .pontosTuristicos = 8
    };

    // Calcular densidade populacional e PIB per capita
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Comparar as duas cartas
    compararCartas(&carta1, &carta2);

    return 0;
}