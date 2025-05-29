#include <stdio.h>

// Registro da carta 1 e carta 2
int main() {
 
    // Menu do jogo (variáveis)

    int opçao;
    int atributo; 
   
  // Variáveis da carta 1
    char Carta[8]; 
    char Estado[12];
    char Codigo[5];
    char Nome_da_cidade[12];
    int Populacao;
    float Area_em_km2;
    int Numero_de_pontos_turisticos;  
    float pib1;
    float densidade_populacional1;
    float pib_per_capita1; 
    float Superpoder1;
    int ponto1 = 0;

    // Variáveis da carta 2
    char carta[8]; 
    char estado[12];
    char codigo[5];
    char nome_da_cidade[12];
    int populacao;
    float area_em_km2;    
    int numero_de_pontos_turisticos;
    float pib2;
    float densidade_populacional2;
    float pib_per_capita2; 
    float Superpoder2;
    int ponto2 = 0;
    
   // Intodução do menu do jogo
    
   printf ("====== Menu principal ======\n");
   printf ("1. Iniciar o jogo\n");
   printf ("2. Regras do jogo\n");
   printf ("3. Sair\n");
    scanf ("%d", &opçao);

    switch (opçao)
{

    case 1:
    printf ("======Execução do jogo======\n\n");

    // Perguntas de cadastro da carta 1
   
    printf("====== Cadastro da carta 1 ======\n\n");
    printf("Digite o número da carta: \n\n");
    scanf("%s", Carta); 

    printf("Digite o nome do Estado: \n"); 
    scanf("%s", Estado); 

    printf("Digite o código da carta: \n");
    scanf("%s", Codigo); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome_da_cidade);

    printf("Digite o quantitativo da população: \n");
    scanf("%d", &Populacao);

    printf("Digite a quantidade de km²: \n");
    scanf("%f", &Area_em_km2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    densidade_populacional1 = Populacao / Area_em_km2;
    pib_per_capita1 = pib1 / Populacao;

    Superpoder1 = Populacao + Area_em_km2 + pib1 + Numero_de_pontos_turisticos + pib_per_capita1 + 
                                                                    (float) Area_em_km2 / Populacao; 

    // Perguntas de cadastro da carta 2
   
    printf("\n====== Cadastro da carta 2 ======\n");
    printf("Digite o número da carta: \n");
    scanf("%s", carta); 

    printf("Digite o nome do Estado: \n"); 
    scanf("%s", estado); 

    printf("Digite o código da carta: \n");
    scanf("%s", codigo); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite o quantitativo da população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de km²: \n");
    scanf("%f", &area_em_km2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    densidade_populacional2 = populacao / area_em_km2;
    pib_per_capita2 = pib2 / populacao;

    Superpoder2 = populacao + area_em_km2 + pib2 + numero_de_pontos_turisticos + pib_per_capita2 + 
    (float) area_em_km2 / populacao; 


    
    // Comparação de atributo (condição de comparação)

    printf("===Duelo de cartas===\n\n");
    
    printf ("Escolha um atributo!\n\n");
    
    printf ("1. Quantitativo da população\n");
    printf ("2. Área em km²\n");
    printf ("3. Quantidade de pontos turísticos\n");
    printf ("4. Densidade populacional\n");
    printf ("5.PIB\n");
    printf ("6. PIB per capita\n");
    printf ("7. Super poder\n");
    scanf("%d", &atributo);
    
    switch (atributo)
    {
    case 1:
       if (Populacao > populacao) {
        
       printf ("Jogador 1 venceu1\n");
       printf("====== Resultado final! ======\n\n");
       printf("%s e %s", Estado, estado);
       printf("O atributo usado foi: %d\n", atributo);
      printf ("População da carta 1: %d\n", Populacao);
       printf ("População da carta 2: %d\n", populacao);
       printf("Carta 1 venceu!\n");
      

       } else if (populacao > Populacao) {
        printf ("Jogador 2 venceu!\n");
 
       printf("====== Resultado final! ======\n\n");
       printf("%s e %s", Estado, estado);
       printf("O atributo usado foi: %d\n", atributo);
       printf ("População da carta 1: %d\n", Populacao);
       printf ("População da carta 2: %d\n", populacao);
       printf("Carta 2 venceu!\n");

       } else {
         printf ("Houve um empate!\n");
       }
       break;
    case 2:

     if  (Area_em_km2 > area_em_km2) {
       printf ("Jogador 1 venceu1\n");
       
       printf("====== Resultado final! ======\n\n");
       printf("%s e %s", Estado, estado);
       printf("O atributo usado foi: %d\n", atributo);
      printf("Área em km² da carta 1: %f", Area_em_km2);
      printf("Área em km² da carta 2: %f", area_em_km2);
       printf("Carta 1 venceu!\n");
      
      } else if (area_em_km2 > Area_em_km2) {
        printf ("Jogador 2 venceu!\n");
       
      printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Área em km² da carta 1: %f", Area_em_km2);
      printf("Área em km² da carta 2: %f", area_em_km2);
      printf("Carta 2 venceu!\n");

       } else {
         printf ("Houve um empate!\n");
       }
        break;
    
        case 3:

        if  (Numero_de_pontos_turisticos > numero_de_pontos_turisticos) {
       printf ("Jogador 1 venceu1\n");
      
      printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Número de pontos turísticos da carta 1: %d", Numero_de_pontos_turisticos);
      printf("Número de pontos turísticos da carta 2: %d", numero_de_pontos_turisticos);
      printf("Carta 1 venceu!\n");
      
    } else if (numero_de_pontos_turisticos > Numero_de_pontos_turisticos ) {
        printf ("Jogador 2 venceu!\n");
      
      printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Número de pontos turísticos da carta 1: %d", Numero_de_pontos_turisticos);
      printf("Número de pontos turísticos da carta 2: %d", numero_de_pontos_turisticos);
      printf("Carta 2 venceu!\n");
      

       } else {
         printf ("Houve um empate!\n");
       }
        break;
       
        case 4:
        if  (densidade_populacional1 < densidade_populacional2) {
       printf ("Jogador 1 venceu1\n");
       
       printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Densidade populacional da carta 1: %d", densidade_populacional1);
      printf("Densidade populacional da carta 2: %d", densidade_populacional2);
      printf("Carta 1 venceu!\n");

       } else if (densidade_populacional2 < densidade_populacional1 ) {
        printf ("Jogador 2 venceu!\n");
        
        printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Densidade populacional da carta 1: %d", densidade_populacional1);
      printf("Densidade populacional da carta 2: %d", densidade_populacional2);
      printf("Carta 2 venceu!\n");

       } else {
         printf ("Houve um empate!\n");
       }
        break;
    
        case 5:

        if (pib1 > pib2) {
       printf ("Jogador 1 venceu1\n");
       
        printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("PIB da carta 1: %f", pib1);
      printf("PIB da carta 2: %f", pib2);
      printf("Carta 1 venceu!\n");

       } else if (pib2 > pib1) {
        printf ("Jogador 2 venceu!\n");
        
         printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("PIB da carta 1: %f", pib1);
      printf("PIB da carta 2: %f", pib2);
      printf("Carta 2 venceu!\n");


       } else {
         printf ("Houve um empate!\n");
       }
       break;

       case 6:

      if (pib_per_capita1 > pib_per_capita2) {
       printf ("Jogador 1 venceu1\n");
       
       
         printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("PIB per capita da carta 1: %f", pib_per_capita1);
      printf("PIB per capita da carta 2: %f", pib_per_capita2);
      printf("Carta 1 venceu!\n");

       } else if (pib_per_capita2 > pib_per_capita1) {
        printf ("Jogador 2 venceu!\n");
        
        printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("PIB per capita da carta 1: %f", pib_per_capita1);
      printf("PIB per capita da carta 2: %f", pib_per_capita2);
      printf("Carta 2 venceu!\n");


       } else {
         printf ("Houve um empate!\n");
       }
       break;
    
       case 7:

        if (Superpoder1 > Superpoder1) {
       printf ("Jogador 1 venceu1\n");
       
       printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Super poder da carta 1: %f", Superpoder1);
      printf("Super poder da carta 2: %f", Superpoder2);
      printf("Carta 1 venceu!\n");

       } else if (Superpoder2 > Superpoder1) {
        printf ("Jogador 2 venceu!\n");
        
         printf("====== Resultado final! ======\n\n");
      printf("%s e %s", Estado, estado);
      printf("O atributo usado foi: %d\n", atributo);
      printf("Super poder da carta 1: %f", Superpoder1);
      printf("Super poder da carta 2: %f", Superpoder2);
      printf("Carta 2 venceu!\n");

       } else {
         printf ("Houve um empate!\n");
       }
       break;

       default:
       printf ("Atributo inexistente!\n");
    }
  
    break;
  
    case 2:

    printf("====== Regras do jogo ======\n\n");
    printf("Neste jogo, você irá cadastrar duas cartas, representando dois estados diferentes.\n");
    printf("Cada carta conterá atributos como população, área territorial, PIB, entre outros.\n\n");
    printf("Após o cadastro, o jogador deverá escolher um atributo específico para confrontar as duas cartas.\n");
    printf("A carta com o valor mais alto nesse atributo será a vencedora da rodada.\n");
    printf("Em caso de empate, nenhuma carta vence.\n\n");
    printf("Use a estratégia para escolher o melhor atributo e vença o duelo!\n");
    printf("Boa sorte!\n\n");
    
   break; 
 
   case 3:
   printf ("Tenha um bom dia!");
   
   break;

   default : 
   printf ("Opção inválida!");

   break;
}
  
 return 0;
}
