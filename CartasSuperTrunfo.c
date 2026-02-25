#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  printf("Vamos cadastrar as cartas do baralho!\n");

//Declaração de variaveis da carta 1.
char codigo1[20];
char estado1[20];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int pturismo1;

//Declaração de variaveis da carta 2.
char codigo2[20];
char estado2[20];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int pturismo2;

//Mensagem de boas vindas e início do cadastro da carta 1.
printf("Vamos cadastrar a carta 1!\n");

//Inicio do cadastro da carta 1.

printf("Digite o código da carta 1 Ex: A01:\n");
scanf("%s", &codigo1);

printf("Digite o estado da carta 1 Ex: SP:\n");
scanf(" %s", &estado1);

printf("Digite a cidade da carta 1 Ex: São_Paulo:\n");
scanf(" %s", &cidade1);

printf("Digite a população da carta 1 Ex: 123456789:\n");
scanf(" %d", &populacao1);

printf("Digite a área da carta 1 Ex: 123456789.0:\n");
scanf(" %f", &area1);

printf("Digite o PIB da carta 1 Ex: 123456789.0:\n");
scanf(" %f", &pib1);

printf("Digite o número de pontos de turismo da carta 1 Ex: 123456789:\n");
scanf(" %d", &pturismo1);

//Mensagem de início do cadastro da carta 2.
printf("Vamos cadastrar a carta 2!\n");

//Inicio do cadastro da carta 2.

printf("Digite o código da carta 2 Ex: A01:\n");
scanf("%s", &codigo2);

printf("Digite o estado da carta 2 Ex: SP:\n");
scanf(" %s", &estado2);

printf("Digite a cidade da carta 2 Ex: São_Paulo:\n");
scanf(" %s", &cidade2);

printf("Digite a população da carta 2 Ex: 123456789:\n");
scanf(" %d", &populacao2);

printf("Digite a área da carta 2 Ex: 123456789.0:\n");
scanf(" %f", &area2);

printf("Digite o PIB da carta 2 Ex: 123456789.0:\n");
scanf(" %f", &pib2);

printf("Digite o número de pontos de turismo da carta 2 Ex: 123456789:\n");
scanf(" %d", &pturismo2);

//Mensagem de fim do cadastro.
printf("Cadastro das cartas concluído!\n\n\n");

//Exibição dos dados cadastrados da carta 1.
printf("Dados de cadastro da carta 1:\n");
printf("Código: %s\n", codigo1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos de turismo: %d\n\n", pturismo1);

//Exibição dos dados cadastrados da carta 2.
printf("Dados de cadastro da carta 2:\n");
printf("Código: %s\n", codigo2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos de turismo: %d\n\n", pturismo2);

//Fim do programa.
return 0;
} 
