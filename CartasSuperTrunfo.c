#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char carta1;
    char estado1;
    char codigocarta1[20];
    char nomecidade1[5];
    int população1;
    float areaq1;
    float pib1;
    int numeropontos1;

    char carta2;
    char estado2;
    char codigocarta2[20];
    char nomecidade2[5];
    int população2;
    float areaq2;
    float pib2;
    int numeropontos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("Carta 1 \n");
    

    printf("Digite a carta 1: ");
    scanf("%s", &carta1);
   

    printf("Digite o estado: \n");
    scanf("%s", &estado1);
       

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigocarta1);
        

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade1);
    

    printf("Digite a quantidade de habitantes na cidade(população):  \n");
    scanf("%d", &população1);
    

    printf("Digite a areá da cidade:\n");
    scanf("%f", &areaq1);
    

    printf("Digite a pib da cidade: \n");
    scanf("%f", &pib1);
    

    printf("Digite numero de pontos desta cidade: \n");
    scanf("%f", &numeropontos1);
      

// Cadastrando a carta 2

    printf("Carta 2 \n");


    printf("Digite a carta 2: \n");
    scanf("%s", &carta2);


    printf("Digite o estado: \n");
    scanf("%s", &estado2);


    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigocarta2);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);


    printf("Digite a quantidade de habitantes na cidade(população): \n");
    scanf("%d", &população2);


    printf("Digite a areá da cidade: \n");
    scanf("%f", &areaq2);


    printf("Digite a pib da cidade: \n");
    scanf("%f", &pib2);


    printf("Digite numero de pontos desta cidade: \n");
    scanf("%f", &numeropontos2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Carta: %s\n", &carta1);
    printf("Estado: %s\n", &estado1);
    printf("Codigo: %s\n", &codigocarta1);
    printf("Nome da cidade: %s\n", &nomecidade1);
    printf("População: %d\n", &população1);
    printf("Area M2: %f\n", &areaq1);
    printf("Pib: %f\n", &pib1);
    printf("Pontos: %d\n", &numeropontos1);

    printf("Carta: %s\n", &carta2);
    printf("Estado: %s\n", &estado2);
    printf("Codigo: %s\n", &codigocarta2);
    printf("Nome da cidade: %s\n", &nomecidade2);
    printf("População: %d\n", &população2);
    printf("Area M2: %f\n", &areaq2);
    printf("Pib: %f\n", &pib2);
    printf("Pontos: %d\n", &numeropontos2);




    return 0;
}
