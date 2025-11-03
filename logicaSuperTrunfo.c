#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char Estado1;
    char Codigo_da_Carta1[5];
    char Nome_da_cidade1[50];
    unsigned long int População1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
    float Densidade_Populacional1;
    float PIB_per_Capita1;
    float Super_Poder1;

    //Declaração das variáveis da segunda carta
    char Estado2;
    char Codigo_da_Carta2[5];
    char Nome_da_cidade2[50];
    unsigned long int População2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;
    float Densidade_Populacional2;
    float PIB_per_Capita2;
    float Super_Poder2;


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //Cadastro da primeria carta
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s",&Codigo_da_Carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]",&Nome_da_cidade1);//Lê o Enter

    printf("Digite a população: ");
    scanf("%lu",&População1);

    printf("Digite a área (em km²): ");
    scanf("%f",&Area1);

    printf("Digite o PIB (em bilhôes de reais): ");
    scanf("%f",&PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d",&Pontos_Turisticos1);

    
    //Cadastro da segunda carta

    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s",&Codigo_da_Carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]",&Nome_da_cidade2);//Lê o Enter

    printf("Digite a população: ");
    scanf("%lu",&População2);

    printf("Digite a área (em km²): ");
    scanf("%f",&Area2);

    printf("Digite o PIB (em bilhôes de reais): ");
    scanf("%f",&PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d",&Pontos_Turisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    ////Exibição dos dados das Cartas (depois verificar se precisa tira)

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_cidade1);
    printf("População: %lu\n", População1);
    printf("Área: %.2f km²\n",Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos Turíscos: %d\n", Pontos_Turisticos1);

    //Calculo de PIB/Densidade Carta1
    Densidade_Populacional1= (float)(População1/Area1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    PIB_per_Capita1= (float)(PIB1*1000000000)/População1;
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);

    //Calcular o Super poder1 
    Super_Poder1 = (float)População1 + Area1 + PIB1 + Pontos_Turisticos1 + PIB_per_Capita1 + (1.0 / Densidade_Populacional1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_cidade2);
    printf("População: %lu\n", População2);
    printf("Área: %.2f km²\n",Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos Turíscos: %d\n", Pontos_Turisticos2);

    //Calculo de PIB/Densidade Carta2
    Densidade_Populacional2= (float)(População2/Area2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    PIB_per_Capita2= (float)(PIB2*1000000000)/População2;
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);

    //Calcular o Super poder 2
    Super_Poder2 = (float)População2 + Area2 + PIB2 + Pontos_Turisticos2 + PIB_per_Capita2 + (1.0 / Densidade_Populacional2);



    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    //Exibição e Comparações:

    printf("\n=== Comparação de Cartas(Atributo: População) ===\n");
    printf("Carta 1 - %s: %lu habitantes\n", Nome_da_cidade1,População1);
    printf("Carta 2 - %s: %lu habitantes\n", Nome_da_cidade2,População2);

    if(População1>População2){
        printf("\nResultado: Carta 1 (%s) venceu!\n",Nome_da_cidade1);
    }else{
        printf("\nResultado: Carta 2 (%s) veneu!\n", Nome_da_cidade2);
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
