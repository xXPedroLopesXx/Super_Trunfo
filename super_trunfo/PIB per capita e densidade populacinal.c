#include <stdio.h>

int main() {

    //Carta 1

    int populacao1, n_pontos_turisticos1;
    float area1, PIB1, PIB_capita1, densidade_populacional1;
    char estado1[20], cidade1[50], codigo_carta1[5];

    //Carta 2

    int populacao2, n_pontos_turisticos2;
    float area2, PIB2, PIB_capita2, densidade_populacional2;
    char estado2[20], cidade2[50], codigo_carta2[5];


        //Cadastro Carta 1

    printf("\n---Registro Carta 1:---");

    printf("\nDigite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Area da cidade: \n");
    scanf("%f", &area1);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos1);

        //Carta 1

    printf("\n---Carta 1---");

    printf("\nEstado: %s\n", estado1);
    printf("codigo da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.0f km2\n", area1);
    printf("PIB: %.0f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos1);

    //PIB percapita e Densidade populacional

    PIB_capita1 = PIB1 / populacao1;
    printf("PIB per capita: %.2f\n", PIB_capita1);

    densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidade_populacional1);


        //Cadastro Carta 2

    printf("\n---Registro Carta 2:---");

    printf("\nDigite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta2);
    
    printf("Digite o Nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Populacao da cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Area da cidade: \n");
    scanf("%f", &area2);
    
    printf("PIB da cidade: \n");
    scanf("%f", &PIB2);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos2);

        //Carta 2

    printf("\n---Carta 2---");

    printf("\nEstado: %s\n", estado2);
    printf("codigo da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.0f km2\n", area2);
    printf("PIB: %.0f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos2);
    
    //PIB percapita e Densidade populacional

    PIB_capita2 = PIB2 / populacao2;
    printf("PIB per capita: %.2f\n", PIB_capita2);

    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
}