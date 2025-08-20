#include <stdio.h>

int main() {
    int opcao; // variavel para o menu interativo
    int escolha1, escolha2;   
    
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
    


    printf("Digite os dados da Primeira carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1); // aqui vai ler somente uma letra

    printf("Digite o codigo da carta (A01): ");
    scanf(" %s", codcarta1);  

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // aqui lê com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: (Km²) ");
    scanf("%f", &km1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pt1);


    // calculo densidade populacional
    dp1 = populacao1 / km1;

    // Cálculo do PIB per capita
    pibperc1 = (pib1 * 1000000000) / populacao1;


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

    
    printf("Digite os dados da segunda carta\n");
    printf("\n"); // espaço entre os textos
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta (B02): ");
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

    pibperc2 = (pib2 * 1000000000) / populacao2;


    printf("\n"); // espaço entre os textos
    
    //criaçao de menu interativo

    printf("-----ESCOLHA UMA OPÇÃO-----\n");
    printf("\n"); // espaço entre os textos
    printf(" (1). Exibir as Regras \n");
    printf(" (2). Exibir os valores das cartas \n");
    printf(" (3). Iniciar o Jogo \n");
    printf("\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    printf("\n"); // espaço entre os textos


    switch (opcao) {
        case 1:
            printf("----- ----- ----- REEGRAS DO JOGO ----- ----- -----\n");
            printf("\n");
            printf("1. Cada jogador possui uma carta com atributos diferentes.\n");
            printf("2. Os jogadores escolhem dois atributos diferentes e os comparam.\n");
            printf("3. O jogador com o maior valor no atributo escolhido vence.\n");
            printf("4. No final Soma os valores comparados, o de MAIOR valor total vence.\n");
            printf("5. Para comparar Densidade Populacional, o MENOR valor vence.\n");
                 break;
        case 2:
            printf("--VALORES DA PRIMEIRA CARTA!--\n");
            printf("------------------------------\n");
            printf("Estado: %c\n", estado1);
            printf("Código da Carta: %s\n", codcarta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área (Km²): %.2f\n", km1);
            printf("PIB (em bilhões): %.2f\n", pib1);
            printf("Pontos Turísticos: %d\n", pt1);
            printf("Densidade Populacional: %.2f\n", dp1);
            printf("PIB per Capita: %.2f\n", pibperc1);
           
            printf("\n");
            // Exibe os valores da segunda carta

            printf("\n--VALORES DA SEGUNDA CARTA!--\n");
            printf("------------------------------\n");
            printf("Estado: %c\n", estado2);
            printf("Código da Carta: %s\n", codcarta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área (Km²): %.2f\n", km2);
            printf("PIB (em bilhões): %.2f\n", pib2);
            printf("Pontos Turísticos: %d\n", pt2);
            printf("Densidade Populacional: %.2f\n", dp2);
            printf("PIB per Capita: %.2f\n", pibperc2);
                 break;
        case 3: { // aqui uso {} pois estou declarando novas variaveis assim crio um bloco isolado e evito erros 
          
             // variaveis para armazenar os resultados das comparações

            float resultado1_1 = 0, resultato2_1 = 0; // aqui coloquei de forma propositao resultato para diferenciar na hora de digitar
            float resultado1_2 = 0, resultato2_2 = 0;
            float soma_1, soma_2;

            printf("----- JOGO SUPER TRUNFO -----\n\n");
            printf("\n");
            // Escolha do primeiro atributo
            printf("Escolha o primeiro atributo:\n");
            printf("1. População\n");
            printf("2. Área (Km²)\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");

            printf("Digite o número do atributo desejado: ");
            scanf("%d", &escolha1);

            switch (escolha1) {
                case 1:
                    resultado1_1 = populacao1;
                    resultato2_1 = populacao2;
                    break;
                case 2:
                    resultado1_1 = km1;
                    resultato2_1 = km2;
                    break;
                case 3:
                    resultado1_1 = pib1;
                    resultato2_1 = pib2;
                    break;
                case 4:
                    resultado1_1 = pt1;
                    resultato2_1 = pt2;
                    break;
                case 5:
                    resultado1_1 = 1.0f / dp1; // Inverte a densidade para que o menor valor vença
                    resultato2_1 = 1.0f / dp2; // Inverte a densidade para que o menor valor vença
                    break;
                case 6:
                    resultado1_1 = pibperc1;
                    resultato2_1 = pibperc2;
                    break;
                default: // caso o jogador escolha uma opção invalida
                    printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            }

            // segundo atributo - de forma que nao mostra o primero escolhido
            printf("\nEscolha o segundo atributo:\n");

            if(escolha1 != 1) printf("1. População\n");
            if(escolha1 != 2) printf("2. Área (Km²)\n");
            if(escolha1 != 3) printf("3. PIB\n");  
            if(escolha1 != 4) printf("4. Pontos Turísticos\n");
            if(escolha1 != 5) printf("5. Densidade Populacional\n");
            if(escolha1 != 6) printf("6. PIB per Capita\n");

            printf("Digite o número do atributo desejado: ");
            scanf("%d", &escolha2);

            // verifica se ralmente o jogador escolheu um atributo diferente do primeiro
            if (escolha2 == escolha1) {
                printf("Você escolheu o mesmo atributo! Por favor, escolha um atributo diferente ");
                break;
            }

            switch (escolha2) {
                case 1:
                    resultado1_2 = populacao1;
                    resultato2_2 = populacao2;
                    break;
                case 2:
                    resultado1_2 = km1;
                    resultato2_2 = km2;
                    break;
                case 3:
                    resultado1_2 = pib1;
                    resultato2_2 = pib2;
                    break;
                case 4:
                    resultado1_2 = pt1;
                    resultato2_2 = pt2;
                    break;
                case 5:
                    resultado1_2 = 1.0f / dp1; // Inverte a densidade para que o menor valor vença
                    resultato2_2 = 1.0f / dp2; 
                    break;
                case 6:
                    resultado1_2 = pibperc1;
                    resultato2_2 = pibperc2;
                    break;
                default: // caso o jogador escolha uma opção invalida
                    printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            }

            // soma dos resultados
            soma_1 = resultado1_1 + resultado1_2;
            soma_2 = resultato2_1 + resultato2_2;


            printf("\n----- RESULTADO INDIVIDUAl -----\n");
            printf("\n");
        
            printf("Atributo 1 (%s): %.2f vs %.2f -> %s venceu\n",
                (escolha1 == 1) ? "População" :
                (escolha1 == 2) ? "Área Km²" :
                (escolha1 == 3) ? "PIB" :
                (escolha1 == 4) ? "Pontos Turísticos" :
                (escolha1 == 5) ? "Densidade Populacional" :
                "PIB per Capita", // nao coloquei a opcao pois logicamente se nao for um dos anteriores é 6
                resultado1_1, resultato2_1,
                (resultado1_1 > resultato2_1) ? cidade1 : (resultado1_1 < resultato2_1 ? cidade2 : "Empate"));

                printf("\n");

            printf("Atributo 2 (%s): %.2f vs %.2f -> %s venceu\n",
                (escolha2 == 1) ? "População" :
                (escolha2 == 2) ? "Área Km²" :
                (escolha2 == 3) ? "PIB" :
                (escolha2 == 4) ? "Pontos Turísticos" :
                (escolha2 == 5) ? "Densidade Populacional" :
                "PIB per Capita",
                resultado1_2, resultato2_2,
                (resultado1_2 > resultato2_2) ? cidade1 : (resultado1_2 < resultato2_2 ? cidade2 : "Empate"));

            printf("\n--- RESULTADO FINAL ---\n");
            printf("\n");
            printf("Soma dos atributos:\n");
            printf("\n");    
            printf("A Carta %s, ficou com um total de: %.2f Pontos.\n", cidade1, soma_1);
            printf("\n");
            printf("A Carta %s, ficou com um total de: %.2f Pontos.\n", cidade2, soma_2);
            printf("\n");

            printf("----- VENCEDOR -----\n");
            printf("\n");
            if (soma_1 > soma_2) {
                printf("A Carta   %s, Venceu!\n", cidade1);

            } else if (soma_1 < soma_2) {
                printf("A Carta   %s, Venceu!\n", cidade2);
            } else {
                printf("Vixi, houve um empate! :(\n");
            }
            break;
        } // bloco isolado do case 3 
            // caso o jogador escolha uma opção inválida
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
     }

    return 0; // finaliza o programa
}