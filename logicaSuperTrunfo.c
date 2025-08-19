#include <stdio.h>

int main() {
    int opcao; // variavel para o menu interativo
    int atributo; //variavel para menur de selecao
    // Variáveis da primeira carta
    char estado1;
    char codcarta1[50];
    char cidade1[50];
    int populacao1;
    float km1;
    float pib1;
    int pt1;
    float dp1; //abrev de densidade populacional
    float pibperc1; // abrev de pib per capita
    float poder1;
    float superpoder1;


    printf("Digite os dados da Primeira carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1); // aqui vai ler somente uma letra

    printf("Digite o codigo da carta: (A01)");
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

    printf("Digite o codigo da carta: (B02)");
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

    printf("\n"); // espaço entre os textos

    //criaçao de menu interativo
    printf("-----ESCOLHA UMA OPÇÃO-----\n");
    printf("\n"); // espaço entre os textos
    printf(" (1). Exibir os valores das cartas: \n");
    printf(" (2). Exibir as Regras: \n");
    printf(" (3). Escolher um Atributo: \n");
    scanf("%d", &opcao);

    // menu interativo
    switch (opcao) {
    case 1:
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

      break;
    case 2:
    //exibe as regras
      printf("-----REGRAS DO JOGO-----\n");
      printf("\n"); // espaço entre os textos
      printf("Vence a Carta com o Maior Valor no atributo escolhido.\n");
      printf("Para Densidade Demográfica vence a carta com o menor valor.\n");
      break;

      case 3:
            printf("-----ESCOLHA UM ATRIBUTO-----\n");
            printf("\n"); // espaço entre os textos
            printf("(1). População: \n");
            printf("(2). Area em Km²:\n");
            printf("(3). PIB:\n");
            printf("(4). Pontos Turisticos:\n");
            printf("(5). Densidade Populacional:\n");
            printf("(6). PIB Per Capta:\n");
            printf("(7). Super Poder:\n");
            scanf("%d", &atributo);
            
        switch (atributo) {
        case 1:
        if (populacao1 > populacao2){
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s)  com %.2f pontos em população, venceu!\n", cidade1, populacao1);
    } else if (populacao1 < populacao2){
        printf("Carta 2 venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em população, venceu!\n", cidade2, populacao2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        case 2:
        if (km1 > km2){
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em km², venceu!\n", cidade1, km1);
    } else if (km1 < km2){
        printf("Carta 2 venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em km², venceu!\n", cidade2, km2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        case 3:
         if (pib1 > pib2){
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em PIB, venceu!\n", cidade1, pib1);
    } else if (pib1 < pib2){
        printf("Carta 2 venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em PIB, venceu!\n", cidade2, pib2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        case 4:
       if (pt1 > pt2){
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em ponto Turistico, venceu!\n", cidade1, pt1);
    } else if (pt1 < pt2){
        printf("Carta 2 venceu!\n");
         printf("A Carta, (%s) com %.2f pontos em ponto Turistico, venceu!\n", cidade2, pt2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        case 5:
        if (dp1 < dp2){  // aqui o menor valor vence
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em Densidade Populacional, venceu!\n", cidade1, dp1);
    } else if (dp1 > dp2){
        printf("Carta 2 venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em Densidade Populacional, venceu!\n", cidade1, dp2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        case 6:
      if (pibperc1 > pibperc2){
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em PIB per capta, venceu!\n", cidade1, pibperc1);
    } else if (pibperc1 < pibperc2){
        printf("Carta 2 venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em PIB per capta, venceu!\n", cidade1, pibperc2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        case 7:
       if (superpoder1 > superpoder2){
        printf("Carta 1 Venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em Super Poder, venceu!\n", cidade1, superpoder1);
    } else if (superpoder1 < superpoder2){
        printf("Carta 2 venceu!\n");
        printf("A Carta, (%s) com %.2f pontos em Super Poder, venceu!\n", cidade1, superpoder2);
    } else{
        printf("Houve um empate!\n");
    }
            break;
        default:
        printf("Opção inválida\n");
      }

      break;

    default:
      printf("Opção inválida\n");
     }

 return 0;
}