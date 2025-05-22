#include <stdio.h>

int main() {
    

    //a1_c1 = atributo 1 da carta 1
    //a1_c2 = atributo 1 da carta 2
    //a2_c1 = atributo 2 da carta 1
    //a2_c2 = atributo 2 da carta 2
    
    int Atributo1, Atributo2;
    int resultado1, resultado2;
    float a1_c1, a1_c2, a2_c1, a2_c2, soma1, soma2;

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
    printf("Area: %.0f Km2\n", area1);
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
    printf("Area: %.0f Km2\n", area2);
    printf("PIB: %.0f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos2);
    
        //PIB percapita e Densidade populacional

    PIB_capita2 = PIB2 / populacao2;
    printf("PIB per capita: %.2f\n", PIB_capita2);

    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    
        //Atributo 1

    printf("\n---Atributos---\n");
    printf("1.Nome da cidade (impossivel comparar)\n");
    printf("2.Populacao:\n");
    printf("3.Area:\n");
    printf("4.PIB:\n");
    printf("5.Numero de Pontos Turisticos:\n");
    printf("6.Densidade populacional:\n");
    printf("7.PIB per Capita:\n");
    printf("Escolha o Atributo:");
    scanf("%d", &Atributo1);

        //Atributo 2

    printf("\n---Atributos---\n");
    printf("1.Nome da cidade (impossivel comparar)\n");
    printf("2.Populacao:\n");
    printf("3.Area:\n");
    printf("4.PIB:\n");
    printf("5.Numero de Pontos Turisticos:\n");
    printf("6.Densidade populacional:\n");
    printf("7.PIB per Capita:\n");
    printf("Escolha o Atributo:");
    scanf("%d", &Atributo2);

        //Duelo de Cartas

    switch (Atributo1)
    {
    case 1:
        printf("\nimpossivel comparar esses atributos\n");

        return 0;
        
        break;
    case 2:
        printf("\nEstado 1: %s\nEstado 2: %s\n", estado1, estado2);
        printf("\nPrimeiro Atributo Escolhido: Populacao\n");
        printf("Populacao Estado 1: %d\nPopulacao Estado 2: %d\n", populacao1, populacao2);
        
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        a1_c1 = populacao1;
        a1_c2 = populacao2;

        break;
    case 3:
        printf("\nEstado 1: %s\nEstado 2: %s\n", estado1, estado2);
        printf("\nPrimeiro Atributo Escolhido: Area\n");
        printf("Area Estado 1: %2.f\nArea Estado 2: %2.f\n", area1, area2);

        resultado1 = area1 > area2 ? 1 : 0;
        a1_c1 = area1;
        a1_c2 = area2;

        break;
    case 4:
        printf("\nEstado 1: %s\nEstado 2: %s\n", estado1, estado2);
        printf("\nPrimeiro Atributo Escolhido: PIB\n");
        printf("PIB Estado 1: %2.f\nPIB Estado 2: %2.f\n", PIB1, PIB2);

        resultado1 = PIB1 > PIB2 ? 1 : 0;
        a1_c1 = PIB1;
        a1_c2 = PIB2;

        break;
    case 5:
        printf("\nEstado 1: %s\nEstado 2: %s\n", estado1, estado2);
        printf("\nPrimeiro Atributo Escolhido: Numero de Pontos Turisticos\n");
        printf("Numero de Pontos Turisticos Estado 1: %d\nNumero de Pontos Turisticos Estado 2: %d\n", n_pontos_turisticos1, n_pontos_turisticos2);

        resultado1 = n_pontos_turisticos1 > n_pontos_turisticos2 ? 1 : 0;
        a1_c1 = n_pontos_turisticos1;
        a1_c2 = n_pontos_turisticos2;

        break;
    case 6:
        printf("\nEstado 1: %s\nEstado 2: %s\n", estado1, estado2);
        printf("\nPrimeiro Atributo Escolhido: Densidade Populacional\n");
        printf("Densidade Populacional Estado 1: %2.f\nDensidade Populacional Estado 2: %2.f\n", densidade_populacional1, densidade_populacional2);

        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        a1_c1 = densidade_populacional1;
        a1_c2 = densidade_populacional2;

        break; 
    case 7:
        printf("\nEstado 1: %s\nEstado 2: %s\n", estado1, estado2);
        printf("\nPrimeiro Atributo Escolhido: PIB per Capita\n");
        printf("PIB per Capita Estado 1: %2.f\nPIB per Capita Estado 2: %2.f\n", PIB_capita1, PIB_capita2);

        resultado1 = PIB_capita1  > PIB_capita2 ? 1 : 0;
        a1_c1 = PIB_capita1;
        a1_c2 = PIB_capita2;

        break;
    default:
            printf("\nAcao invalida\n");

            return 0;

        break;
    }

        if(Atributo1 == Atributo2){

        printf("Voce escolheu o mesmo atributo!\n");
        
        return 0;

        } else
            switch (Atributo2)
            {
    case 1:
        printf("impossivel comparar esses atributos\n");

        return 0;

        break;
    case 2:
        
        printf("\nSegundo Atributo Escolhido: Populacao\n");
        printf("Populacao Estado 1: %d\nPopulacao Estado 2: %d\n", populacao1, populacao2);
        
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        a2_c1 = populacao1;
        a2_c2 = populacao2;
        break;
    case 3:
        
        printf("\nSegundo Atributo Escolhido: Area\n");
        printf("Area Estado 1: %2.f\nArea Estado 2: %2.f\n", area1, area2);

        resultado2 = area1 > area2 ? 1 : 0;
        a2_c1 = area1;
        a2_c2 = area2;

        break;
    case 4:
        
        printf("\nSegundo Atributo Escolhido: PIB\n");
        printf("PIB Estado 1: %2.f\nPIB Estado 2: %2.f\n", PIB1, PIB2);

        resultado2 = PIB1 > PIB2 ? 1 : 0;
        a2_c1 = PIB1;
        a2_c2 = PIB2;

        break;
    case 5:
       
        printf("\nSegundo Atributo Escolhido: Numero de Pontos Turisticos\n");
        printf("Numero de Pontos Turisticos Estado 1: %d\nNumero de Pontos Turisticos Estado 2: %d\n", n_pontos_turisticos1, n_pontos_turisticos2);

        resultado2 = n_pontos_turisticos1;
        a2_c1 = n_pontos_turisticos1;
        a2_c2 = n_pontos_turisticos2;

        break;
    case 6:
        
        printf("\nSegundo Atributo Escolhido: Densidade Populacional\n");
        printf("Densidade Populacional Estado 1: %d\nDensidade Populacional Estado 2: %d\n", densidade_populacional1, densidade_populacional2);

        resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        a2_c1 = densidade_populacional1;
        a2_c2 = densidade_populacional2;

        break; 
    case 7:
        
        printf("\nSegundo Atributo Escolhido: PIB per Capita\n");
        printf("PIB per Capita Estado 1: %2.f\nPIB per Capita Estado 2: %2.f\n", PIB_capita1, PIB_capita2);

        resultado2 = PIB_capita1  > PIB_capita2 ? 1 : 0;
        a2_c1 = PIB_capita1;
        a2_c2 = PIB_capita2;

        break;
    default:
            printf("Acao invalida\n");
        break;
    }

       //Soma dos atributos

       soma1 = a1_c1 + a2_c1;
       soma2 = a1_c2 + a2_c2;

       printf("\nSoma dos atributos da carta 1: %2.f\n", soma1);
       printf("Soma dos atributos da carta 2: %2.f\n", soma2);

       //Vencedor

       if(soma1 > soma2){

        printf("\nCarta 1 Vencedora!\n");
       } else if(soma1 < soma2){
        printf("\nCarta 2 Vencedora!\n");
       } else{
        printf("\nEmpate");
       }
}