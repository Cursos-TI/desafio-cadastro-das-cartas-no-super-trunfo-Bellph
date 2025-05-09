#include <stdio.h>

int main() {

    //introdução das variáveis do código
    char estado1, estado2;
    char cidade1[20], cidade2[20];
    char codigo1[20], codigo2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //cadastro da primeira carta
    printf("Vamos cadastrar sua carta? \n");

    printf("Digite a primeira letra do estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta:\n");
    scanf(" %3s", codigo1);

    printf("Digite a sigla da cidade:\n");
    scanf(" %2s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Agora digite a area (em km²):\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos1);

    //adição das novas variáveis após a coleta das informações anteriores para que o calculo seja realizado corretamente
    float densidade1 = (float) populacao1 / area1;
    float pibpc1 = pib1 / (float) populacao1;

    //exibição das informações da primeira carta
    printf("Carta 1 registrada!\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", pibpc1);

    //cadastro da segunda carta
    printf("Hora de cadastrar a segunda carta\n");

    printf("Digite a primeira letra do estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta:\n");
    scanf(" %2s", codigo2);
    scanf("%*c"); //consumir o ENTER deixado no buffer

    printf("Digite a sigla da cidade:\n");
    scanf(" %2s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²):\n");
    scanf(" %f", &area2);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    //adição das novas variáveis após a coleta das informações pelo usuário
    float densidade2 = (float) populacao2 / area2;
    float pibpc2 = pib2 / (float) populacao2;

    //exibição das informações da carta 2
    printf("Carta 2 Registrada!\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %2s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %f reais\n", pibpc2);
    
    return 0;

}
