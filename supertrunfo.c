#include <stdio.h>

// Registro da carta 1 e carta 2
int main() {
    // Variáveis da carta 1
    char Carta[8]; 
    char Estado[12];
    char Codigo[5];
    char Nome_da_cidade[12];
    int Populacao;
    float Area_em_km2;
    int Numero_de_pontos_turisticos;  

    // Variáveis da carta 2
    char carta[8]; 
    char estado[12];
    char codigo[5];
    char nome_da_cidade[12];
    int populacao;
    float area_em_km2;
    int numero_de_pontos_turisticos;

    // Perguntas de cadastro da carta 1
    printf("====== Cadastro da carta 1 ======\n");
    printf("Digite o número da carta: \n");
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

    // Exibição dos dados da carta 1
    printf("\n====== Dados da carta 1 ======\n");
    printf("Número da carta: %s\n", Carta);
    printf("Nome do Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("Quantitativo da população: %d\n", Populacao);
    printf("Área em km²: %.2f\n", Area_em_km2);
    printf("Quantidade de pontos turísticos: %d\n", Numero_de_pontos_turisticos);

    // Exibição dos dados da carta 2
    printf("\n====== Dados da carta 2 ======\n");
    printf("Número da carta: %s\n", carta);
    printf("Nome do Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Quantitativo da população: %d\n", populacao);
    printf("Área em km²: %.2f\n", area_em_km2);
    printf("Quantidade de pontos turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}
