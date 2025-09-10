#include <stdio.h>
#include <string.h>

int main(){

// Identificação das variáveis

   // Variáveis Carta 01
    char estado1 = 'a';
    char codigocarta1[20] = "A00";
    char nomecidade1[20] = "nomecidade";
    char nomeatributo1[20] = "nomeatributo";
    char nomeatributo2[20] = "nomeatributo";
    unsigned long int populacao1;
    int qtdpontos1, atributo1, atributo2;
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

//Esolha dos atributos a serem utilizados para as 2 batalhas

printf ("***Agora, você escolherá 2 atributos a serem utilizados para a batalha:***\n");

//Menu interativo de escolha do primeiro atributo
printf("Escolha o primeiro atributo:\n");
printf ("1. População\n");
printf ("2. Área\n");
printf ("3. PIB\n");
printf ("4. Pontos turísticos\n");
printf("5. Densidade populacional (MENOR vence)\n");

//Jogador escolhe primeiro atributo
scanf ("%d", &atributo1);

//Nomeando o primeiro atributo de acordo com o número digitado
if (atributo1 == 1) {
   strcpy(nomeatributo1, "População");
} else if (atributo1 == 2) {
   strcpy(nomeatributo1, "Área");
} else if (atributo1 == 3) {
   strcpy(nomeatributo1, "PIB");
} else if (atributo1 == 4) {
   strcpy(nomeatributo1, "Pontos Turísticos");
} else if (atributo1 == 5) {
   strcpy(nomeatributo1, "Densidade Populacional");
} else {
   strcpy(nomeatributo1, "Desconhecido");
}

//Mostrar na tela o primeiro atributo escolhido
if ( 1 > atributo1 || atributo1 > 5) {
    printf("Inválido!\n");
    return 0; //encerra o programa
} else {
    printf("O primeiro atributo escolhido foi: %s\n", nomeatributo1);
}

//Menu interativo de escolha do segundo atributo, excluindo a opção do primeiro atributo
printf("Agora, escolha o segundo atributo:\n");

switch (atributo1){ 
   case 1 : printf ("2. Área\n");
   printf ("3. PIB\n");
   printf ("4. Pontos turísticos\n");
   printf ("5. Densidade populacional (MENOR vence)\n");
   break;

   case 2 : printf ("1. População\n");
   printf ("3. PIB\n");
   printf ("4. Pontos turísticos\n");
   printf("5. Densidade populacional (MENOR vence)\n");
   break;

   case 3 : printf ("1. População\n");
   printf ("2. Área\n");
   printf ("4. Pontos turísticos\n");
   printf("5. Densidade populacional (MENOR vence)\n");
   break;

   case 4 : printf ("1. População\n");
   printf ("2. Área\n");
   printf ("3. PIB\n");
   printf("5. Densidade populacional (MENOR vence)\n");
   break;

   case 5 : printf ("1. População\n");
   printf ("2. Área\n");
   printf ("3. PIB\n");
   printf ("4. Pontos turísticos\n");
   break;
}

//Jogador escolhe segundo atributo
scanf ("%d", &atributo2);


//Nomeando o segundo atributo de acordo com o número digitado
if (atributo2 == 1) {
   strcpy(nomeatributo2, "População");
} else if (atributo2 == 2) {
   strcpy(nomeatributo2, "Área");
} else if (atributo2 == 3) {
   strcpy(nomeatributo2, "PIB");
} else if (atributo2 == 4) {
   strcpy(nomeatributo2, "Pontos Turísticos");
} else if (atributo2 == 5) {
   strcpy(nomeatributo2, "Densidade Populacional");
} else {
   strcpy(nomeatributo2, "Desconhecido");
}

//Mostrar na tela o segundo atributo escolhido
if (atributo1 == atributo2) {
    printf("O segundo atributo deve ser diferente do primeiro!\n");
    return 0; //encerra o programa
} else if ( 1 > atributo2 || atributo2 > 5) {
    printf("Inválido!\n");
    return 0; //encerra o programa
} else {
    printf("O segundo atributo escolhido foi: %s\n", nomeatributo2);
}


//Exibição dos valores do primeiro atributo de cada carta
printf ("***Atributos escolhidos! Agora vamos aos resultados dessa disputa!***\n");
printf ("Cidade 01 - %s VS. Cidade 02 - %s\n", nomecidade1, nomecidade2);
printf ("1º Batalha: %s\n", nomeatributo1);
   switch (atributo1) {
      case 1:
      printf ("População Carta 01 = %lu | População Carta 02 = %lu\n", populacao1, populacao2);
      break;
    case 2:
      printf ("Área Carta 01 = %.2f | Área Carta 02 = %.2f\n", areacidade1,areacidade2);
      break;
    case 3:
      printf ("PIB Carta 01 = %.2f | PIB Carta 02 = %.2f\n", PIB1, PIB2);
      break;
    case 4:
      printf ("Nº Ptos Turísticos Carta 01 = %d | Nº Ptos Turísticos Carta 02 = %d\n", qtdpontos1, qtdpontos2);
      break;
   }

//Exibição do resultado do confronto do primeiro atributo
switch (atributo1){
   case 1:
      if (populacao1 != populacao2) {
      printf ("%s\n", (populacao1 > populacao2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf ("Empate!\n");
      }
   break;
   case 2:
      if (areacidade1 != areacidade2) {
      printf ("%s\n", (areacidade1 > areacidade2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf ("Empate!\n");
      }
   break;
      case 3:
      if (PIB1 != PIB2) {
      printf ("%s\n", (PIB1 > PIB2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf ("Empate!\n");
      }
   break;
      case 4:
      if (qtdpontos1 != qtdpontos2) {
      printf("%s\n", (qtdpontos1 > qtdpontos2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf("Empate!");
      }
   break;
   case 5:
      if (Densidadepopulacional1!= Densidadepopulacional2) {
      printf("%s\n", (Densidadepopulacional1 < Densidadepopulacional2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf("Empate!");
      }
   break;
}

//Exibição dos valores do segundo atributo de cada carta
printf ("2º Batalha: %s\n", nomeatributo2);
   switch (atributo2) {
      case 1:
      printf ("População Carta 01 = %lu | População Carta 02 = %lu\n", populacao1, populacao2);
      break;
    case 2:
      printf ("Área Carta 01 = %.2f | Área Carta 02 = %.2f\n", areacidade1,areacidade2);
      break;
    case 3:
      printf ("PIB Carta 01 = %.2f | PIB Carta 02 = %.2f\n", PIB1, PIB2);
      break;
    case 4:
      printf ("Nº Ptos Turísticos Carta 01 = %d | Nº Ptos Turísticos Carta 02 = %d\n", qtdpontos1, qtdpontos2);
      break;
   }

//Exibição do resultado do confronto do segundo atributo
switch (atributo2){
   case 1:
      if (populacao1 != populacao2) {
      printf ("%s\n", (populacao1 > populacao2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf ("Empate!\n");
      }
   break;
   case 2:
      if (areacidade1 != areacidade2) {
      printf ("%s\n", (areacidade1 > areacidade2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf ("Empate!\n");
      }
   break;
      case 3:
      if (PIB1 != PIB2) {
      printf ("%s\n", (PIB1 > PIB2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf ("Empate!\n");
      }
   break;
      case 4:
      if (qtdpontos1 != qtdpontos2) {
      printf("%s\n", (qtdpontos1 > qtdpontos2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf("Empate!");
      }
   break;
   case 5:
      if (Densidadepopulacional1!= Densidadepopulacional2) {
      printf("%s\n", (Densidadepopulacional1 < Densidadepopulacional2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
      } else {
      printf("Empate!");
      }
   break;
}

//Batalha usando a soma dos atributos de cada carta (Superpoder)
printf ("***Em uma disputa final surpresa, utilizaremos o SUPERPODER das cartas como atributo da rodada!***\n");
printf ("Super Poder Carta 01 = %.2f | Super Poder Carta 02 = %.2f\n", superpoder1 , superpoder2);
if ( superpoder1 != superpoder2) {
   printf ("%s\n", (superpoder1 > superpoder2) ? "Carta 01 Venceu!" : "Carta 02 Venceu!");
   } else {
   printf("Empate!");
}

return 0;
}