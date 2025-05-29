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
    return carta.populacao / carta.area;
}

float calcularPibPerCapita (Carta carta) {
    return carta.pib / carta.populacao;
}

void compararCartas (Carta carta1 , Carta carta2) {
     float densidade1 = calcularDensidadePopulacional(carta1);
     float densidade2 = calcularDensidadePopulacional(carta2);

     printf("Comparando a densidade populacional: \n");
     printf("%s (%s): Densidade = %.2f\n" , carta1.NomeCidade, carta1.estado, densidade1);
     printf("%s (%s): Densidade = %.2f\n" , carta2.NomeCidade, carta2.estado, densidade2);
}

int main () {
    Carta carta1 = {"São Paulo", "SP01" , "São Paulo" , 12300000, 1521.11, 2300000000};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro" , 6748000, 1182.30, 1500000000.0, 45};

    compararCartas(carta1 , carta2);

    return 0;
}