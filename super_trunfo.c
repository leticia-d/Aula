#include <stdio.h>
#include <string.h>

int main(){

// Identificação das variáveis

   // Variáveis Carta 01
    char estado1 = 'a';
    char codigocarta1[20] = "A00";
    char nomecidade1[20] = "nomecidade";
    char nomeatributo[20] = "nomeatributo";
    unsigned long int populacao1;
    int qtdpontos1, atributo;
    float areacidade1, PIB1, PIBpercapita1, Densidadepopulacional1, superpoder1;

    //Variáveis Carta 02
    char estado2 = 'b';
    char codigocarta2[20] = "B00";
    char nomecidade2[20] = "nomecidade";
    unsigned long int populacao2;
    int qtdpontos2;
    float areacidade2, PIB2, PIBpercapita2, Densidadepopulacional2, superpoder2;


    printf("Vamos iniciar nosso jogo de Super Trunfo - Países! Primeiramente, vamos definir as cartas a serem utilizadas! Preparado?\n");
    printf("Observação: Nos campos com resultados numerais, não utilizar ponto e vírgula, apenas números.\n");
    
// Coleta de dados do usuário para definição da carta 01

   printf("Jogador 01, para definir seu estado, escolha uma letra de 'a' a 'h': \n");
   scanf(" %c", &estado1);
   
   printf ("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 por exemplo: A01, B03...)\n");
   scanf("%s", codigocarta1);

   printf ("Digite o nome da cidade: \n");
   scanf ("%s", nomecidade1);

   printf ("Digite a população dessa cidade: \n");
   scanf ("%lu", &populacao1);

   printf ("Digite o valor da área (em km²) dessa cidade: \n");
   scanf ("%f", &areacidade1);

   printf ("Digite o valor do PIB da cidade: \n");
   scanf ("%f", &PIB1);

   printf ("Digite a quantidade de pontos turísticos dessa cidade: \n");
   scanf ("%d", &qtdpontos1);


   //Cálculo densidade populacional e PIB per capita carta 01
   Densidadepopulacional1 = (float) populacao1 / areacidade1;
   PIBpercapita1 = (float) PIB1 / populacao1;

   //Cálculo Super Poder Carta 01   
   superpoder1 = (float) (populacao1 + areacidade1 +  PIB1 + qtdpontos1 + PIBpercapita1 + 1/Densidadepopulacional1);
   
   //Compilação dos dados da Carta 01
   printf ("\nCarta 01 \n Estado: %c  \n Código: %s \n Nome da Cidade: %s \n População: %lu\n Área: %.2f km² \n PIB %.2f \n Número de Pontos Turísticos: %d \n Densidade populacional %.2f\n PIB per capita: %.2f\n Superpoder: %.1f\n", estado1, codigocarta1, nomecidade1, populacao1, areacidade1, PIB1, qtdpontos1, Densidadepopulacional1, PIBpercapita1, superpoder1 );

   //Coleta de dados do usuário para definição da carta 02
   printf("Jogador 02, para definir seu estado, escolha uma letra de 'a' a 'h': \n");
   scanf(" %c", &estado2);

   printf ("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 por exemplo: A01, B03...)\n");
   scanf("%s", codigocarta2);

   printf ("Digite o nome da cidade: \n");
   scanf ("%s", nomecidade2);

   printf ("Digite a população dessa cidade: \n");
   scanf ("%lu", &populacao2);

   printf ("Digite o valor da área (em km²) dessa cidade: \n");
   scanf ("%f", &areacidade2);

   printf ("Digite o valor do PIB da cidade: \n");
   scanf ("%f", &PIB2);

   printf ("Digite a quantidade de pontos turísticos dessa cidade: \n");
   scanf ("%d", &qtdpontos2);

//Cálculo densidade populacional e PIB per capita carta 02
   Densidadepopulacional2 = (float) populacao2 / areacidade2;
   PIBpercapita2 = (float) PIB2 / populacao2;

// Cálculo Super Poder Carta 02 
   superpoder2 = (float) (populacao2 + areacidade2 +  PIB2 + qtdpontos2 + PIBpercapita2 + 1/Densidadepopulacional2);

 //Compilação dos dados da Carta 02
   printf ("\nCarta 02 \n Estado: %c  \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB %.2f \n Número de Pontos Turísticos: %d \n Densidade populacional %.2f\n PIB per capita: %.2f\n Super Poder: %.1f \n", estado2, codigocarta2, nomecidade2, populacao2, areacidade2, PIB2, qtdpontos2, Densidadepopulacional2, PIBpercapita2, superpoder2 );

/*Comparações
   printf("\n--- Comparação de Cartas ---\n");
   printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
   printf("Área: Carta 1 venceu (%d)\n", areacidade1 > areacidade2);
   printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
   printf("Pontos Turísticos: Carta 1 venceu (%d)\n", qtdpontos1 > qtdpontos2);
   printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidadepopulacional1 < Densidadepopulacional2);
   printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita1 > PIBpercapita2);
   printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);
   
// Comparando atributo específico para ver qual carta vence a batalha
   printf ("Agora iremos batalhar com a propriedade Poulação!\n");
   printf ("Carta 01: %lu\nCarta 02: %lu\n",populacao1, populacao2);
   
   if (populacao1 > populacao2) {
   printf ("Resultado: Carta 01 Venceu!\n");
   }
   else {
   printf ("Resultado: Carta 02 Venceu!\n");
   }
*/

//Escolha do atributo a ser utilizado na batalha
printf ("***Agora, escolha qual atributo será utilizado para a batalha:***\n");
printf ("1. População\n");
printf ("2. Área\n");
printf ("3. PIB\n");
printf ("4. Pontos turísticos\n");
scanf ("%d", &atributo);

if (atributo == 1) {
   strcpy(nomeatributo, "População");
} else if (atributo == 2) {
   strcpy(nomeatributo, "Área");
} else if (atributo == 3) {
   strcpy(nomeatributo, "PIB");
} else if (atributo == 4) {
   strcpy(nomeatributo, "Pontos Turísticos");
} else {
   strcpy(nomeatributo, "Desconhecido");
}

//Exibição do resultado


printf ("Cidade 01: %s | Cidade 02: %s\n", nomecidade1, nomecidade2);
printf ("Atributo usado na comparação: %s\n", nomeatributo);
   switch (atributo) {
      case 1:
      printf ("População Carta 01: %lu | População Carta 02: %lu\n", populacao1, populacao2);
      break;
    case 2:
      printf ("Área Carta 01: %.2f | Área Carta 02: %.2f\n", areacidade1,areacidade2);
      break;
    case 3:
      printf ("PIB Carta 01: %.2f | PIB Carta 02: %.2f\n", PIB1, PIB2);
      break;
    case 4:
      printf ("Nº Ptos Turísticos Carta 01: %d | Nº Ptos Turísticos Carta 02: %d\n", qtdpontos1, qtdpontos2);
      break;
   }

switch (atributo){
   case 1:
      if (populacao1 > populacao2) {
         printf ("Carta 01 Venceu!\n");
      } else if (populacao1 < populacao2) {
         printf ("Carta 02 Venceu!\n");
      } else {
         printf ("Empate!\n");
      }
   break;
   case 2:
      if (areacidade1 > areacidade2) {
         printf ("Carta 01 Venceu!\n");
      } else if (areacidade1 < areacidade2) {
         printf ("Carta 02 Venceu!\n");
      } else {
         printf ("Empate!\n");
      }
   break;
      case 3:
      if (PIB1 > PIB2) {
         printf ("Carta 01 Venceu!\n");
      } else if (PIB1 < PIB2) {
         printf ("Carta 02 Venceu!\n");
      } else {
         printf ("Empate!\n");
      }
   break;
         case 4:
      if (qtdpontos1 > qtdpontos2) {
         printf ("Carta 01 Venceu!\n");
      } else if (qtdpontos1 < qtdpontos2) {
         printf ("Carta 02 Venceu!\n");
      } else {
         printf ("Empate!\n");
      }
   break;
}



return 0;
}