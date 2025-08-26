#include <stdio.h>

int main(){

// Identificação das variáveis

   // Variáveis Carta 01
    char estado1 = 'a';
    char codigocarta1[20] = "A00";
    char nomecidade1[20] = "nomecidade";
    int populacao1, qtdpontos1;
    float areacidade1, PIB1;

    //Variáveis Carta 02
    char estado2 = 'b';
    char codigocarta2[20] = "B00";
    char nomecidade2[20] = "nomecidade"
    int populacao2, qtdpontos2;
    float areacidade2, PIB2;

    printf("Vamos iniciar nosso jogo de Super Trunfo - Países! Primeiramente, vamos definir as cartas a serem utilizadas! Preparado?\n");
    printf("Observação: Nos campos com resultados numerais, não utilizar ponto e vírgula, apenas números.\n");
    
   // Coleta de dados do usuário para definição da carta 01

    printf("Para definir seu estado1, escolha uma letra de 'a' a 'h': \n");
    scanf(" %c", &estado1);

    printf ("Digite o código da carta (A letra do estado1 seguida de um número de 01 a 04 por exemplo: A01, B03...)\n");
    scanf("%s", codigocarta1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomecidade1);

    printf ("Digite a população dessa cidade: \n");
    scanf ("%d", &populacao1);

    printf ("Digite o valor da área (em km²) dessa cidade: \n");
    scanf ("%f", &areacidade1);

    printf ("Digite o valor do PIB1 da cidade: \n");
    scanf ("%f", &PIB1);

    printf ("Digite a quantidade de pontos turísticos dessa cidade: \n");
    scanf ("%d", &qtdpontos1);

    //Compilação dos dados da Carta 01
    printf ("\nCarta 01 \n Estado: %c  \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB %.2f \n Número de Pontos Turísticos: %d \n", estado1, codigocarta1, nomecidade1, populacao1, areacidade1, PIB1, qtdpontos1 );

    //Coleta de dados do usuário para definição da carta 02
    printf("Para definir seu estado1, escolha uma letra de 'a' a 'h': \n");
    scanf(" %c", &estado2);

    printf ("Digite o código da carta (A letra do estado1 seguida de um número de 01 a 04 por exemplo: A01, B03...)\n");
    scanf("%s", codigocarta2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomecidade2);

    printf ("Digite a população dessa cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Digite o valor da área (em km²) dessa cidade: \n");
    scanf ("%f", &areacidade2);

    printf ("Digite o valor do PIB1 da cidade: \n");
    scanf ("%f", &PIB2);

    printf ("Digite a quantidade de pontos turísticos dessa cidade: \n");
    scanf ("%d", &qtdpontos2);

 //Compilação dos dados da Carta 02
    printf ("\nCarta 02 \n Estado: %c  \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB %.2f \n Número de Pontos Turísticos: %d \n", estado1, codigocarta2, nomecidade2, populacao2, areacidade2, PIB2, qtdpontos2 );

}