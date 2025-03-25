#include <stdio.h>

// Estrutura para representar uma carta de estado
struct CartaEstado {
    char estado[50];
    float areaKm;                // Área em km²
    int populacao;               // Número de habitantes
    float PIB;                   // Produto Interno Bruto em bilhões
    int pontosTuristicos;        // Número de pontos turísticos
    float PIBperCapita;          // PIB per capita em R$
    float densidadePopulacional; // Densidade populacional (hab/km²)
};

// Função para imprimir os dados de uma carta de estado
void imprimirCartaEstado(struct CartaEstado c) {
    printf("Estado: %s\n", c.estado);
    printf("Área: %.2f km²\n", c.areaKm);
    printf("População: %d habitantes\n", c.populacao);
    printf("PIB: R$ %.2f bilhões\n", c.PIB);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("PIB per Capita: R$ %.2f\n", c.PIBperCapita);
    printf("Densidade Populacional: %.2f hab/km²\n\n", c.densidadePopulacional);
}

int main() {
    // Criando a carta do primeiro estado
    struct CartaEstado carta1;

    // Definindo os valores para o estado 1
    strcpy(carta1.estado, "São Paulo");
    carta1.areaKm = 248222.0;
    carta1.populacao = 45919049;
    carta1.PIB = 215000.0;
    carta1.pontosTuristicos = 200;
    carta1.PIBperCapita = carta1.PIB * 1000000000 / carta1.populacao; // Convertendo PIB para R$ per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.areaKm;

    // Criando a carta do segundo estado
    struct CartaEstado carta2;

    // Definindo os valores para o estado 2
    strcpy(carta2.estado, "Rio de Janeiro");
    carta2.areaKm = 43780.0;
    carta2.populacao = 17366189;
    carta2.PIB = 69500.0;
    carta2.pontosTuristicos = 150;
    carta2.PIBperCapita = carta2.PIB * 1000000000 / carta2.populacao; // Convertendo PIB para R$ per capita
    carta2.densidadePopulacional = carta2.populacao / carta2.areaKm;

    // Imprimindo as cartas
    printf("Carta 1 - Estado 1:\n");
    imprimirCartaEstado(carta1);

    printf("Carta 2 - Estado 2:\n");
    imprimirCartaEstado(carta2);

    return 0;
}

