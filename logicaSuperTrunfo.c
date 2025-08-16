#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codcarta1[50];
    char cidade1[50];
    int populacao1;
    float km1;
    float pib1;
    int pt1;
    // inclusao de variaveis para o nivel aventureiro
    float dp1; //abrev de densidade populacional
    float pibperc1; // abrev de pib per capita
    float poder1;
    float superpoder1;
    // variaveis para exibiçao do poder no final
    int resultpopulacao;
    int resultkm;
    int resultpib;
    int resultpt;
    int resultdp;
    int resultpibperc;
    int resultsuper;

    printf("Digite os dados da Primeira carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1); // aqui vai ler somente uma letra

    printf("Digite o codigo da carta: ");
    scanf(" %s", codcarta1);  

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // aqui lê com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &km1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pt1);


    // calculo densidade populacional
    dp1 = populacao1 / km1;

    // Cálculo do PIB per capita
    pibperc1 = (float)(pib1 * 1000000000)/ populacao1;

    // calculo do poder da carta
    poder1 = populacao1 + km1 + pib1 + pt1 + pibperc1 + (1 / dp1 );

    superpoder1 = poder1 / 100000000;

    printf("\n"); // espaço entre os textos

    // Variáveis da segunda carta
    char estado2;
    char codcarta2[50];
    char cidade2[50];
    int populacao2;
    float km2;
    float pib2;
    int pt2;
    float dp2; //abrev de densidade populacional
    float pibperc2;
    float poder2;
    float superpoder2;
    
    printf("Digite os dados da segunda carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta: ");
    scanf(" %s", codcarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);  

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: (Km²) ");
    scanf("%f", &km2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pt2);


    dp2 = populacao2 / km2;

    pibperc2 = (float)(pib2 * 1000000000)/ populacao2;

    poder2 = populacao2 + km2 + pib2 + pt2 + pibperc2 + (1 / dp2 );

    superpoder2 = poder2 / 1000000000;

    // Exibe os dados da carta 1
    printf("\n-------DADOS DA CARTA 1-------\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", km1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pt1);
    printf("Densidade Populacional: %.2f hab/Km²\n", dp1);
    printf("PIB per Capita: %.2f \n", pibperc1);
    printf("Super poder: %f\n", superpoder1);


    printf("\n------------------------------\n"); // espaço entre os textos

    // Exibe os dados da carta 2
    printf("\n-------DADOS DA CARTA 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", km2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f hab/Km²\n", dp2);
    printf("PIB per Capita: %.2f \n", pibperc2);
    printf("Super poder: %f\n", superpoder2);

    // Comparação entre as cartas
    resultpopulacao = populacao1 > populacao2;
    resultkm = km1 > km2;
    resultpib = pib1 > pib2;
    resultpt = pt1 > pt2;
    resultdp = dp1 < dp2; // pois o menor valor vence
    resultpibperc = pibperc1 > pibperc2;
    resultsuper = superpoder1 > superpoder2;

    // exibicao dos resultados comparados 
    
    printf("\n-------COMPARAÇÃO DE CARTAS-------\n");

    printf("(Atributo: Super Poder)\n");

    
    printf("A Carta 1 -  %s (%f),\n", cidade1, superpoder1);

    printf("A Carta 2 -  %s (%f),\n", cidade2, superpoder2);
    
    // exibiçao da variavel se uma for maior exibe se nao exibe a outre se for empate exibe a mensagem de empate
    
    printf("\n-------RESULTADOS DA BATALHA-------\n");

  if (superpoder1 > superpoder2) {
        printf("A Carta 1, (%s) %.2f, venceu!\n", cidade1, superpoder1);
    } else if (superpoder2 > superpoder1) {
        printf("A Carta 2, (%s) %.2f, venceu!\n", cidade2, superpoder2);
    } else {
        printf("Empate no Super Poder!\n");
    }


    return 0;
}