#include <stdio.h>
 
int main() {
    
    char estado[20] = "Bahia";
    char codigo [10]= "B01";
    int populacao = 14.850;
    float area = 567.295;
    float pib = 425.5;
    int pontosturisticos = 25;


    printf("estado 1: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("populacao: %d milhoes\n", populacao);
    printf("Area: %.2f metros km\n", area);
    printf("pib: %.2f bilhoes\n", pib);
    printf("pontos turisticos: %d pontos\n", pontosturisticos);

}