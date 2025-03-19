#include <stdio.h>


int main() {
    
    char estado[10] = "SaoPaulo";
    char codigo [10]= "S02";
    int populacao = 46;
    float area = 248.219;
    float pib = 2.720;
    int pontosturisticos = 28;
    float densisdadepopulacional = 185.319;
    float pibpercapita = 59.130;


    printf("estado 2: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("populacao: %d milhoes\n", populacao);
    printf("Area: %.2f metros km\n", area);
    printf("pib: %.2f bilhoes\n", pib);
    printf("pontos turisticos: %d pontos\n", pontosturisticos);
    printf("densidadepopulacional: %.3f bilhoes\n", densisdadepopulacional);
    printf("pibpercapita: %.3f milhoes\n", pibpercapita);


}