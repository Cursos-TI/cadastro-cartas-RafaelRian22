#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // int populacao, populacao2 ,pontosturisticos,pontosturisticos2;
  int populacao, populacao2 ,pontosturisticos,pontosturisticos2;
  float area,area2,pib,pib2;

   char codigodacarta1[10] = "ad1";
   char estado[10] = "céara";
   char nomedacidade[10] = "fortaleza";
   populacao = 2000000;
   pib = 30000000;
   pontosturisticos = 50;
   area = 313;
   
   char codigodacarta2[10] = "ad2";
   char estado2[10] = "bahia";
   char nomedacidade2[10] = "salvador";  
   populacao2 = 2000000;
   pib2 = 69000000;
   pontosturisticos2 = 20;
   area2 = 693;
   
   printf("carta 1: estado:%s\n código:%s\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %f\n", estado,codigodacarta1,nomedacidade,populacao,pib,pontosturisticos,area);

   printf("carta 2: estado:%s\n código:%s\n nome da cidade: %s\n população:%d\n PIB:%f\n pontosturísticos:%d\n área: %f\n", estado2,codigodacarta2,nomedacidade2,populacao2,pib2,pontosturisticos2,area2);

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
