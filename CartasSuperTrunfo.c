#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo\n");
    printf("Novo commit\n");

    char codigo_da_cidade;
    char nome_da_cidade[50];
    int populacao;
    float area;
    float PIB;
    int quantidade_pontos_turisticos;

    printf("Digite o codigo da cidade: \n");
    scanf(" %c", &codigo_da_cidade);

    printf("Digite o nome da cidade: \n");
    getchar();
    scanf(" %[^\n]" , nome_da_cidade);
    
    printf("Digite a populacao: \n");
    scanf(" %d" , &populacao);
 
    printf("Digite a area: \n");
    scanf(" %f" , &area);

    printf("Digite o PIB: \n");
    scanf(" %f" , &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf(" %d" , &quantidade_pontos_turisticos);

    // calculo:
    float densidade_populacional = populacao / area;
    float PIB_per_capta = PIB / populacao;

    printf("\n--- Dados da cidade cadastrada ---\n");
    printf("Codigo da cidade: %c\n", codigo_da_cidade);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Numero da populacao: %d\n", populacao);
    printf("Area da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f milhoes\n", PIB);
    printf("Quantidade de pontos turisticos: %d\n", quantidade_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n" , densidade_populacional);
    printf("Renda per capita: %.2f\n" , PIB_per_capta);

    return 0;
   
}
