#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char cidade[20];
    int codigo_cidade;
    int populacao;
    float area;
    int pontos_turisticos;

     printf("*** cadastro de cartas Super Trunfo ***\n");

     printf("insira o nome da cidade:\n");
     scanf("%s", cidade);

     printf("insira o código da cidade:\n");
     scanf("%d", &codigo_cidade),

     printf("insira o número de habitantes:\n");
     scanf("%d", &populacao );

     printf("Insira a área da cidade:\n");
     scanf("%f", &area);

     printf("Insira a quantidade de pontos turísticos:\n");
     scanf("%d", &pontos_turisticos);

     printf("*** Exibindo dados cadastrados ***\n");

     printf("Cidade: %s\n Código da Cidade: %d\n População: %d\n Área: %f\n Pontos Turísticos: %d\n", cidade, codigo_cidade, populacao, area, pontos_turisticos);

    

     

















    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
