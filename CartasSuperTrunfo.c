#include <stdio.h>

int main() {
    char estado[50];
    char código [80];
    char cidade [60];
    int população1, população2;
    float área1, área2;
    float PIB1, PIB2;
    int pontosturisticos;
    float densidadepopulacional;
    float PIBpercapita;


    printf("Carta 1 \n\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &código);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &população1);

    printf("Digite a área em km²: \n");
    scanf("%f", &área1);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = população1 / área1;

    printf("A densidade populacional é: %.2f\n", densidadepopulacional);

    PIBpercapita = PIB1 / população1;

    printf("O PIB per capita é: %.2f\n", PIBpercapita);
    

    printf("Carta 2 \n\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &código);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite a área em km²: \n");
    scanf("%f", &área2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = população2 / área2;

    printf("A densidade populacional é: %.2f\n", densidadepopulacional);

    PIBpercapita = PIB2 / população2;

    printf("O PIB per capita é: %.2f\n", PIBpercapita);


    if (população1 > população2){
        printf("Carta1 venceu!\n");
        
    } else {
        printf("Carta2 venceu!\n");
    }

    if (área1 > área2){
        printf("Carta1 venceu!\n");
        
    } else {
        printf("Carta2 venceu!\n");
    }
    
    
    return 0;

}

