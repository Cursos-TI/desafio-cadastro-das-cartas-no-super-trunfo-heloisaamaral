#include <stdio.h>

int main() {
    char estado[50];
    char código [80];
    char cidade [60];
    int população;
    float área;
    float PIB;
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
    scanf("%d", &população);

    printf("Digite a área em km²: \n");
    scanf("%f", &área);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = população / área;

    printf("A densidade populacional é: %.2f\n", densidadepopulacional);

    PIBpercapita = PIB / população;

    printf("O PIB per capita é: %.2f\n", PIBpercapita);
    

    printf("Carta 2 \n\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &código);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área em km²: \n");
    scanf("%f", &área);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = população / área;

    printf("A densidade populacional é: %.2f\n", densidadepopulacional);

    PIBpercapita = PIB / população;

    printf("O PIB per capita é: %.2f\n", PIBpercapita);

    return 0;

}

