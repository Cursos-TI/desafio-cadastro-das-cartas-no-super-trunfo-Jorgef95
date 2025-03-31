    #include <stdio.h>

    int main (){

        // Desafio Super Trunfo - Países
        // Tema 2 - Desafio Aventureiro
          
            //Declaração das variáveis da primeira carta
            char estado1; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
            char codigo1 [5]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
            char nomeCidade1[20]; // O nome da cidade.
            int npt1, populacao1; // populacao: O número de habitantes da cidade; Npt: número de pontos turísticos.
            float area1, pib1;// area: A área da cidade em quilômetros quadrados; PIB: O Produto Interno Bruto da cidade;
            
            //Declaração das variáveis da segunda carta
            char estado2; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
            char codigo2 [5]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
            char nomeCidade2[20]; // O nome da cidade.
            int npt2, populacao2; // Npt: número de pontos turísticos, populacao: O número de habitantes da cidade;
            float area2, pib2; // area: A área da cidade em quilômetros quadrados; PIB: O Produto Interno Bruto da cidade;
                    
            // Cadastro das Cartas:
            // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
            
            //Entrada de dados da primeira carta
            printf("Insira os dados da primeira carta:\n");
            printf("Estado (A-H): ");
            scanf(" %c", &estado1);
            printf("Código da Carta (ex: A01): ");
            scanf("%s", codigo1);
            printf("Nome da cidade: ");
            scanf(" %s", nomeCidade1);
            printf("População: ");
            scanf("%d", &populacao1);
            printf("Área (em km²): ");
            scanf("%f", &area1);
            printf("PIB (em bilhões de reais): ");
            scanf("%f", &pib1);
            printf("Número de pontos turísticos: ");
            scanf("%d", &npt1);
            
            //Entrada de dados da segunda carta
            printf("\nInsira os dados da segunda carta:\n");
            printf("Estado (A-H): ");
            scanf(" %c", &estado2);
            printf("Código da Carta (ex: B02): ");
            scanf("%s", codigo2);
            printf("Nome da cidade: ");
            scanf(" %s", nomeCidade2);
            printf("População: ");
            scanf("%d", &populacao2);
            printf("Área (em km²): ");
            scanf("%f", &area2);
            printf("PIB (em bilhões de reais): ");
            scanf("%f", &pib2);
            printf("Número de pontos turísticos: ");
            scanf("%d", &npt2);
                          
            // Cálculo do PIB per capita e densidade populacional;
            //Carta 1:
        
            float dp1 = (float) populacao1/area1, ppc1 = (float) pib1*1000000000/populacao1; //dp: densidade per capita, ppc: PIB per capita.
        
            //Carta 2:

            float dp2 = (float) populacao2/area2, ppc2 = (float) pib2*1000000000/populacao2; //dp: densidade per capita, ppc: PIB per capita.

            // Cálculo do Super Poder
            float sp1 = (float) populacao1 + area1 + pib1 + npt1 + ppc1 + (1 / dp1);
            float sp2 = (float) populacao2 + area2 + pib2 + npt2 + ppc2 + (1 / dp2);

            // Comparação dos atributos
            int cmpPopulacao = (populacao1 > populacao2);
            int cmpArea = (area1 > area2);
            int cmpPIB = (pib1 > pib2);
            int cmpNpt = (npt1 > npt2);
            int cmpDensidade = (dp1 < dp2); // Carta com menor densidade vence
            int cmpPPC = (ppc1 > ppc2);
            int cmpSuperPoder = (sp1 > sp2);
                   
            // Exibição dos Dados das Cartas:
            // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
            // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        
            //Exibição dos dados da primeira carta
        
            printf("\nCarta 1\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Nome da Cidade: %s\n", nomeCidade1);
            printf("População: %u hab\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", npt1);
            printf("Densidade Populacional: %.2f hab/km²\n", dp1);
            printf("PIB per Capita: %.2f reais\n", ppc1);
        
            //Exibição dos dados da segunda carta
        
            printf("\nCarta 2\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome da Cidade: %s\n", nomeCidade2);
            printf("População: %u hab\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", npt2);
            printf("Densidade Populacional: %.2f hab/km²\n", dp2);
            printf("PIB per Capita: %.2f reais\n", ppc2);    
        
            // Exibição das comparações
            printf("\nComparação de Cartas:\n");
            printf("População: Carta 1 venceu (%d)\n", cmpPopulacao);
            printf("Área: Carta 1 venceu (%d)\n", cmpArea);
            printf("PIB: Carta 1 venceu (%d)\n", cmpPIB);
            printf("Pontos Turísticos: Carta 1 venceu (%d)\n", cmpNpt);
            printf("Densidade Populacional: Carta 1 venceu (%d)\n", cmpDensidade);
            printf("PIB per Capita: Carta 1 venceu (%d)\n", cmpPPC);
            printf("Super Poder: Carta 1 venceu (%d)\n", cmpSuperPoder);

            return 0;
        
    
        
        
        








    }
