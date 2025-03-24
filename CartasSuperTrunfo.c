#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Declaração das variáveis da primeira carta
    char estado1; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo1 [5]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomeCidade1[20]; // O nome da cidade.
    int populacao1, npt1; // populacao: O número de habitantes da cidade; Npt: número de pontos turísticos.
    float area1, pib1; // area: A área da cidade em quilômetros quadrados; PIB: O Produto Interno Bruto da cidade.
    
    //Declaração das variáveis da segunda carta
    char estado2; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo2 [5]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomeCidade2[20]; // O nome da cidade.
    int populacao2, npt2; // populacao: O número de habitantes da cidade; Npt: número de pontos turísticos.
    float area2, pib2; // area: A área da cidade em quilômetros quadrados; PIB: O Produto Interno Bruto da cidade.


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
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
                  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição dos dados da primeira carta

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d hab\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);

    //Exibição dos dados da segunda carta

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d hab\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);



    return 0;

}


