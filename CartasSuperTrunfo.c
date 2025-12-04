#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
//Carta 1
    char estado1, codigo_da_cidade1[4], nome_da_cidade1[60];
    int pop1, pontos_turisticos1;
    float Km²1, PIB1, DensPop1, PIBperCapt1;
    

//entrada das variaveis
    printf("Escolha a primeira carta para digitalizar\nAgora siga as instruções\n");
    
    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da cidade, \n");
    scanf("%s", codigo_da_cidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite o numero populacional da cidade: \n");
    scanf("%d", &pop1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite, em Km², o tamanho territorial da cidade: \n");
    scanf("%f", &Km²1);
    
    printf("Qual o Produto Interno Bruto desta cidade: \n");
    scanf("%f", &PIB1);

//Calculos

    DensPop1 = (float)(pop1 / Km²1);
    PIBperCapt1 = (float)(pop1 / PIB1);

//Exibição final carta 1
    printf("Verificação de dados, Carta 1: \n");

    printf("Estado: %s \n", &estado1);

    printf("Código: %s \n", &codigo_da_cidade1);

    printf("Nome da cidade: %s \n", nome_da_cidade1);

    printf("População: %d \n", pop1);

    printf("Área em Km²: %.6f \n", Km²1);

    printf("O Produto Interno Bruto é de: %.6f \n", PIB1);

    printf("Número de pontos turísticos: %i \n", pontos_turisticos1);

    printf("Densidade Populacional: %.4f \n", DensPop1);

    printf("PIB per Capita: %.4f \n", PIBperCapt1);


//Carta 2
    char estado2, codigo_da_cidade2[4], nome_da_cidade2[60];
    int pop2, pontos_turisticos2;
    float Km²2, PIB2, DensPop2, PIBperCapt2;
    

//entrada das variaveis
    printf("Escolha a segunda carta para digitalizar\nAgora siga as instruções\n");
    
    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da cidade, \n");
    scanf("%s", codigo_da_cidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o numero populacional da cidade: \n");
    scanf("%d", &pop2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite, em Km², o tamanho territorial da cidade: \n");
    scanf("%f", &Km²2);
    
    printf("Qual o Produto Interno Bruto desta cidade: \n");
    scanf("%f", &PIB2);

//Calculos

    DensPop2 = (float)(pop2 / Km²1);
    PIBperCapt2 = (float)(pop2 / PIB1);

//Exibição final carta 2
    printf("Verificação de dados, Carta 2: \n");

    printf("Estado: %s \n", &estado2);

    printf("Código: %s \n", &codigo_da_cidade2);

    printf("Nome da cidade: %s \n", nome_da_cidade2);

    printf("População: %d \n", pop2);

    printf("Área em Km²: %f \n", Km²2);

    printf("O Produto Interno Bruto é de: %f \n", PIB2);

    printf("Número de pontos turísticos: %i \n", pontos_turisticos2);

    printf("Densidade Populacional: %.4f \n", DensPop2);

    printf("PIB per Capita: %.4f \n", PIBperCapt2);


    return 0;
} 
