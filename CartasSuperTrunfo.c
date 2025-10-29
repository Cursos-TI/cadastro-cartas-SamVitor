#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
//Carta 1
// Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigo_da_cidade1[4], nome_da_cidade1[30];
  int populaçao1, pontos_turisticos1;
  float Km²1, PIB1;
  
// Área para entrada de dados
  printf("Escolha a primeira carta para digitalizar\nAgora siga as instruções\n");
    
  printf("Digite o estado: \n");
  scanf("%s", &estado1);

  printf("Digite o codigo da cidade, \n");
  scanf("%s", codigo_da_cidade1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_da_cidade1);

  printf("Digite o numero populacional da cidade: \n");
  scanf("%d", &populaçao1);

  printf("Digite o numero de pontos turisticos da cidade: \n");
  scanf("%d", &pontos_turisticos1);

  printf("Digite, em Km², o tamanho territorial da cidade: \n");
  scanf("%f", &Km²1);
    
  printf("Qual o Produto Interno Bruto desta cidade: \n");
  scanf("%f", &PIB1);
  
// Área para exibição dos dados da cidade
  printf("Verificação de dados, Carta 1: \n");

  printf("Estado: %s \n", &estado1);

  printf("Código: %s \n", &codigo_da_cidade1);

  printf("Nome da cidade: %s \n", nome_da_cidade1);

  printf("População: %d \n", populaçao1);

  printf("Área em Km²: %f \n", Km²1);

  printf("O Produto Interno Bruto é de: %f \n", PIB1);

  printf("Número de pontos turísticos: %i \n", pontos_turisticos1);

//Carta 2
// Área para definição das variáveis para armazenar as propriedades das cidades
  char estado2, codigo_da_cidade2[4], nome_da_cidade2[30];
  int populaçao2, pontos_turisticos2;
  float Km²2, PIB2;
  
// Área para entrada de dados
  printf("Escolha a segunda carta para digitalizar\nAgora siga as instruções\n");
    
  printf("Digite o estado: \n");
  scanf("%s", &estado2);

  printf("Digite o codigo da cidade, \n");
  scanf("%s", codigo_da_cidade2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_da_cidade2);

  printf("Digite o numero populacional da cidade: \n");
  scanf("%d", &populaçao2);

  printf("Digite o numero de pontos turisticos da cidade: \n");
  scanf("%d", &pontos_turisticos2);

  printf("Digite, em Km², o tamanho territorial da cidade: \n");
  scanf("%f", &Km²2);
    
  printf("Qual o Produto Interno Bruto desta cidade: \n");
  scanf("%f", &PIB2);
  
// Área para exibição dos dados da cidade
  printf("Verificação de dados, Carta 2: \n");

  printf("Estado: %s \n", &estado2);

  printf("Código: %s \n", &codigo_da_cidade2);

  printf("Nome da cidade: %s \n", nome_da_cidade2);

  printf("População: %d \n", populaçao2);

  printf("Área em Km²: %f \n", Km²2);

  printf("O Produto Interno Bruto é de: %f \n", PIB2);

  printf("Número de pontos turísticos: %i \n", pontos_turisticos2);


return 0;
} 
