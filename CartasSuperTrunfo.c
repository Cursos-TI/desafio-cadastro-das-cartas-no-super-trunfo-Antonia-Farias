#include <stdio.h>
#include <string.h>

typedef struct {

char estado[50];
char codigo[20];
char NomeCidade[50];
int populacao;
float area;
float pib;
int PontosTuristicos;

} Carta;

float calcularDensidadePopulacional (Carta carta){
    return carta.pib / carta.area;
}

float calcularPibPerCapita (Carta carta) {
    return carta.pib / carta.populacao;
}

void compararCartas (Carta carta1 , Carta carta2) {
     float densidade1 = calcularDensidadePopulacional1(carta1);
     float densidade2 = calcularDensidadePopulacional2(carta2);

     printf("Comparando a densidade populacional: \n");
     printf("s (%s): Densidade = %.2f\n" , carta1.NomeCidade, carta1.estado, densidade1);
     printf("s (%s): Densidade = %.2f\n" , carta2.NomeCidade, carta2.estado, densidade2);
}